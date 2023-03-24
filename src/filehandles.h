#ifndef FILEHANDLES_H_INCLUDED
#define FILEHANDLES_H_INCLUDED
#include "generalimports.h"
#endif


class CurrentProcess {
public:
    static std::string getExePath();
    static std::string getExeName();
    static std::string getWindowsPath(std::string path);
};
