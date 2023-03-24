#include "utilities.h"

std::string Utilities::toUpperCase(std::string in) {
    std::string x = "";
    for (char &c : in) x += toupper(c);
    return x;
}
