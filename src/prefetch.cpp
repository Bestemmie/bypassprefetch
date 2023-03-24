#include "prefetch.h"

int PrefetchUtility::getSCCAVista(std::string filename) {
    int hash_value = 314159;

    for (char &c : filename) {
        hash_value = ((hash_value * 37) + c) % 0x100000000;
    }

    return hash_value;
}
