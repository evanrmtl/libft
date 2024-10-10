//
// Created by evanr on 09/10/2024.
//
#include "ft_libft.h"

char *ft_strrchr( const char * string, int searchedChar ) {
    char toSearch = (char)searchedChar;
    char *lastFind = NULL;
    while(*string != '\0') {
        if(*string == toSearch)
            lastFind = (char *)string;
        string++;
    }
    if(toSearch == '\0')
        return (char *)string;
    return lastFind;
}