#include "filehandles.h"
#include "prefetch.h"
#include "utilities.h"

int main(int argc, char** argv) {
    std::string filename = Utilities::toUpperCase(CurrentProcess::getExeName());
    std::string path = CurrentProcess::getExePath();
    std::string win_path = Utilities::toUpperCase(CurrentProcess::getWindowsPath(path));
    int hash_code = PrefetchUtility::getSCCAVista(win_path);

    std::cout << "Filename: " << filename << std::endl;
    std::cout << "Normal path: " << path << std::endl;
    std::cout << "Windows path: " << win_path << std::endl;

    std::cout << "PREFETCH FILE: " <<  filename << "-" << std::hex << hash_code << ".pf" << std::endl;
    return 0;
}

