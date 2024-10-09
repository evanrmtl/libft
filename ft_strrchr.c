//
// Created by evanr on 09/10/2024.
//
#include "ft_libft.h"

char * strrchr( const char * string, int searchedChar ) {
    char *lastFind = NULL;
    while(*string != '\0') {
        if(*string == searchedChar)
            lastFind = (char *)string;
        string++;
    }
    if(searchedChar == '\0')
        return (char *)string;
    return lastFind;
}