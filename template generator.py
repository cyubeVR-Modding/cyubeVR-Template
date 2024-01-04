import os
import subprocess
import re
import datetime
import shutil
from uuid import uuid4

EDITOR_EXE= r"F:/UNEPIC GAMES/UE_4.27/Engine/Binaries/Win64/UE4Editor-Cmd.exe"
UBT_EXE = r"F:/UNEPIC GAMES/UE_4.27/Engine/Binaries/DotNET/UnrealBuildTool.exe"
UAT_EXE = r"F:/UNEPIC GAMES/UE_4.27/Engine/Build/BatchFiles/RunUAT.bat"
PROJECT_GEN_UPROJECT = r"F:/CyubeVR Modding/UE4 Project Generator/UE4GameProjectGenerator4.27/GameProjectGenerator.uproject"
HEADER_DUMP = r"C:/Program Files (x86)/Steam/steamapps/common/cyubeVR/cyubeVR/Binaries/Win64/UHTHeaderDump"
PAK_FILE = r"C:/Program Files (x86)/Steam/steamapps/common/cyubeVR/cyubeVR/Content/Paks/cyubeVR-WindowsNoEditor.pak"
UNPACKED_FILES = r"F:/CyubeVR Modding/_Tools/UnrealPacker4.27"
PROJECT_FILE = r"F:/CyubeVR Modding/_Tools/UnrealPacker4.27/_unpacked/cyubeVR/cyubeVR.uproject"
PLUGIN_MANIFEST = r"F:/CyubeVR Modding/_Tools/UnrealPacker4.27/_unpacked/cyubeVR/Plugins/cyubeVR.upluginmanifest"
VERSION_CONFIG = r"F:/CyubeVR Modding/_Tools/UnrealPacker4.27/_unpacked/cyubeVR/Config/DefaultGame.ini"
OUTPUT_DIR_START = r"F:/CyubeVR Modding/UE4 Project Generator"
GITHUB_REPO = r"F:/Github Projects/Other/CyubeVR Modding Org/cyubeVR-Template"
TEST_COOK_OUTPUT = r"F:/CyubeVR Modding/UE4 Project Generator/Output"

def check_drive_space():
    _, _, free = shutil.disk_usage(os.path.splitdrive(OUTPUT_DIR_START)[0])
    free = free // (2 ** 30)
    if free < 25:
        print("Not enough space on drive to run generator - needs at least 25GB")
        return False
    return True

def get_project_name():
    uuid = str(uuid4()).replace("-", "")
    uuid = re.sub(r"\d", "", uuid)
    return uuid[:12]

def unpack_files():
    print("============================================================")
    print("                    UNPACKING FILES                         ")
    print("============================================================")
    print("Deleting old unpacked files...")
    os.system(
        "rmdir " +
        '"' +
        os.path.join(UNPACKED_FILES, "_unpacked") +
        '"' +
        " /S /Q"
    )

    print("Unpacking files...")
    subprocess.run([
        os.path.join(UNPACKED_FILES, "repak.exe"),
        "unpack",
        os.path.join(PAK_FILE),
        os.path.join(UNPACKED_FILES, "_unpacked")
    ])

def get_game_version():
    print("============================================================")
    print("                    GET GAME VERSION                        ")
    print("============================================================")
    with open(VERSION_CONFIG, "r") as f:
        for line in f:
            if line.startswith("ProjectVersion="):
                print("Game version is v" + line.split("=")[1].strip())
                return "v" + line.split("=")[1].strip()

def run_project_gen(name):
    print("============================================================")
    print("               RUNNING PROJECT GENERATOR                    ")
    print("============================================================")
    os.mkdir(os.path.join(OUTPUT_DIR_START, name))
    subprocess.run([
        EDITOR_EXE, 
        PROJECT_GEN_UPROJECT,
        "-run=ProjectGenerator",
        "-HeaderRoot=" + HEADER_DUMP,
        "-ProjectFile=" + PROJECT_FILE,
        "-PluginManifest=" + PLUGIN_MANIFEST,
        "-OutputDir=" + os.path.join(OUTPUT_DIR_START, name),
        "-stdout",
        "-unattended",
        "-NoLogTimes"
    ])

def copy_config_files(name):
    print("============================================================")
    print("                COPYING CONFIG FILES                        ")
    print("============================================================")
    shutil.copytree(os.path.join(OUTPUT_DIR_START, "Config"), os.path.join(OUTPUT_DIR_START, name, "Config"))

def copy_uproject(name):
    print("============================================================")
    print("                COPYING UPROJECT FILE                       ")
    print("============================================================")
    shutil.copyfile(os.path.join(OUTPUT_DIR_START, "cyubeVR.uproject"), os.path.join(OUTPUT_DIR_START, name, "cyubeVR.uproject"))

def change_lines(file_name, line_num, text, is_replace, is_regex = False, match_group = ""):
    if not os.path.exists(file_name): return
    lines = open(file_name, 'r').readlines()

    if is_regex:
        for i, line in enumerate(lines):
            if re.search(text, line):
                lines[i] = re.sub(text, match_group, line)
                print("Replaced line " + str(i) + " with " + match_group + " in " + file_name)
    else:
        if is_replace:
            line_num -= 1
            lines[line_num] = text
        else: lines.insert(line_num, text)
        print("Replaced line " + str(line_num) + " with " + text + " in " + file_name)
    
    out = open(file_name, 'w')
    out.writelines(lines)
    out.close()

def modify_project_file(proj_name, file_name, line_number, is_replace, text, accessor = "Public", module = "cyubeVR", is_regex = False, match_group = "", is_plugin = False, plugin_name = ""):
    if is_plugin: open_module = os.path.join(OUTPUT_DIR_START, proj_name, "Plugins", plugin_name, "Source", module)
    else: open_module = os.path.join(OUTPUT_DIR_START, proj_name, "Source", module)
    
    if is_regex: change_lines(file_name, line_number, text, is_replace, is_regex, match_group)
    else: change_lines(os.path.join(open_module, accessor, file_name), line_number, text, is_replace)

def run_rules(name):
    print("============================================================")
    print("                RUNNING THROUGH FIX RULES                   ")
    print("============================================================")

    # Comment out UFUNCTION() in ReceiveLightActor.h
    # - UseActorCustomLocation line 40
    # - GetActorCustomLocation line 52
    modify_project_file(name, "ReceiveLightActor.h", 40, True, "\t//UFUNCTION()\n")
    modify_project_file(name, "ReceiveLightActor.h", 52, True, "\t//UFUNCTION()\n")

    # Remove TEnumAsByte<> (but not the type inside of it) in:
    # - OnInput inside VRGripInterface.h line 62
    # - OnEndPlay inside VRGripScriptBase.h and its _Implementation version in the .cpp file line 70/35
    # - SetMobilityAllEvent inside DeerCPP.h and its _Implementation version in the .cpp file line 54/16
    modify_project_file(name, "VRGripInterface.h", 62, True, "\tvoid OnInput(FKey Key, EInputEvent KeyEvent);\n")

    modify_project_file(name, "VRGripScriptBase.h", 70, True, "\tvoid OnEndPlay(const EEndPlayReason::Type EndPlayReason);\n")
    modify_project_file(name, "VRGripScriptBase.cpp", 35, True, "void UVRGripScriptBase::OnEndPlay_Implementation(const EEndPlayReason::Type EndPlayReason) {\n", "Private")

    modify_project_file(name, "DeerCPP.h", 62, True, "\tvoid SetMobilityAllEvent(EComponentMobility::Type NewMobility);\n")
    modify_project_file(name, "DeerCPP.cpp", 18, True, "void ADeerCPP::SetMobilityAllEvent_Implementation(EComponentMobility::Type NewMobility) {\n", "Private")

    # Comment out UPROPERTY() in:
    # - DragonData_StickySocketStruct.h line 10
    # - AITask_SurfaceNavMoveTo.h line 26
    # - EnvQueryGenerator_DSN_Sphere.h line 26
    modify_project_file(name, "DragonData_StickySocketStruct.h", 10, True, "\t//UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))\n", "Public", "DragonIKPlugin", False, "", True, "DragonIK")
    modify_project_file(name, "AITask_SurfaceNavMoveTo.h", 26, True, "\t//UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))\n", "Public", "SurfaceNavPlugin", False, "", True, "SurfaceNav")
    modify_project_file(name, "EnvQueryGenerator_DSN_Sphere.h", 26, True, "\t//UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))\n", "Public", "SurfaceNavPlugin", False, "", True, "SurfaceNav")

    # Add missing delegate to SurfaceNavMovementComponent.h
    modify_project_file(name, "SurfaceNavMovementComponent.h", 13, False, "\nDECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNeedsPathMoveRotationSignature);\n", "Public", "SurfaceNavPlugin", False, "", True, "SurfaceNav")

    # Fix line 6 on OnNeedsPathMoveRotationSignatureDelegate.h
    modify_project_file(name, "OnNeedsPathMoveRotationSignatureDelegate.h", 6, True, 
                        "UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_ThreeParams(FOnNeedsPathMoveRotationSignatureUObject, FName, EnterPropertyName, FVector, TargetLocation, FVector, TargetUpVector, FVector, TargetForwardVector);\n", 
                        "Public", "SurfaceNavPlugin", False, "", True, "SurfaceNav")

    # Search every file in both modules and accessors for the following regex string: (const) ((\w+)\*\&) and replace it with $2
    # UE does not like const reference pointers in UFUNCTIONs
    for root, _, files in os.walk(os.path.join(OUTPUT_DIR_START, name, "Source")):
        for file in files:
            if file.endswith(".h") or file.endswith(".cpp"):
                modify_project_file(name, os.path.join(root, file), 0, False, "(const) ((\w+)\*\&)", "", "", True, r"\2")

def generate_build_files(name):
    print("============================================================")
    print("                    GENERATING BUILD FILES                  ")
    print("============================================================")
    date = datetime.datetime.now().strftime("%Y.%m.%d-%H.%M.%S")
    subprocess.run([
        UBT_EXE,
        "-projectfiles",
        "-project=" + os.path.join(OUTPUT_DIR_START, name, "cyubeVR.uproject"),
        "-game",
        "-rocket",
        "-progress",
        "-log=" + os.path.join(OUTPUT_DIR_START, name, "Saved/Logs/UnrealVersionSelector-" + str(date) + ".log")
    ])

def compile_project(name):
    print("============================================================")
    print("                    COMPILING PROJECT                       ")
    print("============================================================")
    subprocess.run([
        UBT_EXE,
        "Development",
        "Win64",
        "-Project=" + os.path.join(OUTPUT_DIR_START, name, "cyubeVR.uproject"),
        "-TargetType=Editor",
        "-Progress",
        "-NoEngineChanges",
        "-NoHotReloadFromIDE"
    ])

def test_cook_project(name):
    print("============================================================")
    print("                    COOKING PROJECT                         ")
    print("============================================================")
    
    subprocess.run([
        UAT_EXE,
        "BuildCookRun",
        "-nocompileeditor",
        "-installed",
        "-nop4",
        "-project=" + os.path.join(OUTPUT_DIR_START, name, "cyubeVR.uproject"),
        "-cook",
        "-stage",
        "-archive",
        "-archivedirectory=" + TEST_COOK_OUTPUT,
        "-package",
        "-ue4exe=" + EDITOR_EXE,
        "-ddc=InstalledDerivedDataBackendGraph",
        "-prereqs",
        "-nodebuginfo",
        "-targetplatform=Win64",
        "-build",
        "-target=cyubeVRGame",
        "-clientconfig=Shipping",
        "-utf8output",
        "-unattended"
    ])

def copy_template_to_repo(name):
    print("============================================================")
    print("               COPYING TEMPLATE TO GITHUB REPO              ")
    print("============================================================")
    # We are deleting the files first otherwise we will keep old files that the devs deleted 
    files_to_delete = ["Binaries", "Plugins", "Source", "Saved", "Intermediate", "Config", "cyubeVR.sln", "cyubeVR.uproject"]
    for file in files_to_delete:
        if os.path.exists(os.path.join(GITHUB_REPO, file)):
            if os.path.isfile(os.path.join(GITHUB_REPO, file)): os.remove(os.path.join(GITHUB_REPO, file))
            else: shutil.rmtree(os.path.join(GITHUB_REPO, file))
            print("Deleted " + file)
    
    files_to_copy = ["Binaries", "Plugins", "Source", "Config", "cyubeVR.sln", "cyubeVR.uproject"]
    for file in files_to_copy:
        file_path = os.path.join(OUTPUT_DIR_START, name, file)
        if os.path.exists(file_path):
            if os.path.isfile(file_path): shutil.copyfile(file_path, os.path.join(GITHUB_REPO, file))
            else: shutil.copytree(file_path, os.path.join(GITHUB_REPO, file))
            print("Copied " + file)

def check_tag_name(tag):
    print("============================================================")
    print("                     CHECK TAG NAME                         ")
    print("============================================================")
    # If the tag is the same as the latest tag, then add -patch1 to the tag
    # If the tag is the same as the latest tag + -patch1, then increment the number
    latest_tag = subprocess.run(["git", "describe", "--tags", "--abbrev=0"], cwd=GITHUB_REPO, stdout=subprocess.PIPE).stdout.decode("utf-8").strip()
    if latest_tag == tag: tag += "-patch1"
    elif latest_tag == tag + "-patch1": tag = tag + "-patch" + str(int(latest_tag.split("-patch")[1]) + 1)
    print(tag)
    return tag

def git_commit(commit_message, commit_tag, tag_message):
    print("============================================================")
    print("                       GIT COMMIT                           ")
    print("============================================================")
    subprocess.run(["git", "add", "."], cwd=GITHUB_REPO)
    subprocess.run(["git", "commit", "-m", commit_message], cwd=GITHUB_REPO)
    subprocess.run(["git", "tag", "-a", commit_tag, "HEAD", "-m", tag_message], cwd=GITHUB_REPO)

def git_diff():
    print("============================================================")
    print("                       GIT DIFF                             ")
    print("============================================================")
    subprocess.run(["git", "diff", "HEAD~1", "HEAD", "-U0", "--", ":!*.dll", ":!Binaries/"], cwd=GITHUB_REPO, stdout=open(os.path.join(GITHUB_REPO, "changes.diff"), "w"))
    print("Changes saved to changes.diff")

def git_push(commit_tag):
    print("============================================================")
    print("                       GIT PUSH                             ")
    print("============================================================")
    subprocess.run(["git", "push", "origin"], cwd=GITHUB_REPO)
    subprocess.run(["git", "push", "origin", commit_tag], cwd=GITHUB_REPO)

def wait(stage):
    input("Press enter to continue to next stage: [" + stage + "] ")

def main():
    if not check_drive_space(): return
    name = get_project_name()
    print("Project name: " + name)
    
    if input("Refresh unpacked files? [y/n] ") == 'y': unpack_files()
    
    run_project_gen(name)
    copy_config_files(name)
    copy_uproject(name)
    run_rules(name)

    wait("generate build files")
    generate_build_files(name)
    compile_project(name)
    
    wait("cook project")
    test_cook_project(name)

    wait("copy template to repo")
    copy_template_to_repo(name)

    version_number = input("Version number (e.g. 57.30): ")
    version = input("Primary game version (e.g. Beta 57): ")
    semver = input("PATCH, MINOR or MAJOR version? ").upper() + " - " + version
    commit_message = semver + " - " + input("Commit message (e.g. UE4SS update): ") 

    wait("git commit")
    git_commit(commit_message, version_number, version)
    
    wait("git push")
    git_push(version_number)

def ue4ss_test(): # just for testing if ue4ss changes still allows the project to compile
    if not check_drive_space(): return
    name = get_project_name()
    run_project_gen(name)
    run_rules(name)
    generate_build_files(name)
    compile_project(name)

if __name__ == "__main__":
    main()
    #ue4ss_test()