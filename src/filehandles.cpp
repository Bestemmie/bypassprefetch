#include "filehandles.h"

std::string CurrentProcess::getExePath() {
    char buf[MAX_PATH];
    GetModuleFileNameA(nullptr, buf, MAX_PATH);
    return buf;
}

std::string CurrentProcess::getExeName() {
    std::string path = CurrentProcess::getExePath();
    return path.substr(path.find_last_of('\\')+1);
}

std::string CurrentProcess::getWindowsPath(std::string path) {
    //char* vol;
    //GetSystemDirectoryA(vol, sizeof(vol));

    return "\\VOLUME{01d85a6095d0d7bf-b09607ec}" + path.substr(path.find_first_of("\\"));
}
