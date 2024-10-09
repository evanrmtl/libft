//
// Created by evanr on 09/10/2024.
//

#include "ft_libft.h"

char * strchr( const char * string, int searchedChar ) {
    while(*string != '\0') {
        if(*string == searchedChar)
            return (char *)string;
        string++;
    }
    if(searchedChar == '\0')
        return (char *)string;
    return NULL;
}