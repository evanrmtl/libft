//
// Created by evanr on 09/10/2024.
//

#include <stdio.h>

#include "ft_libft.h"

char * ft_strchr( const char * string, int searchedChar ) {
    char toSearch = (char) searchedChar;
    while(*string != '\0') {
        if(*string == toSearch)
            return (char *)string;
        string++;
    }
    if(toSearch == '\0')
        return (char *)string;
    return NULL;
}