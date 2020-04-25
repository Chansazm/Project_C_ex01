#include <stdio.h>

int my_isspace(char a) 

{
    // && a <= 'z') ``\t''  ``\v''    ``\f''    ``\r''    `` ''
    if ((a == '\n') || (a == '\t') || (a == '\v') || (a == '\f') || (a == 'r') || (a == ' '))
        return 1;
    else {
    return 0;
    }
return 0;
  
}