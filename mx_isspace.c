#include "../inc/libmx.h"

//klsjfgfkjg
bool mx_isspace(char c) {
    
    if (c == '\t' || c == '\n' || c == '\v' || c == '\f'
        || c == '\r' || c == ' ') {
        return true;
    }
    else {
        return false;
    }
    
}
