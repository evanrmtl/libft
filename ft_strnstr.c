//
// Created by evanr on 09/10/2024.
//
#include "ft_libft.h"

char *isInString(char *fullString, char *substring, size_t len) {
    char *startSub = substring;
    char *toReturn = NULL;
    while (*fullString != '\0' && len) {
        if(*fullString == *substring) {
            size_t i = 0;
            toReturn = fullString;
            while (*fullString == *substring) {
                i++;
                substring++;
                fullString++;
                if(i == len && *substring == '\0')
                    return fullString;
            }
        }
        fullString++;
        toReturn = NULL;
        substring = startSub;
    }
    return toReturn;
}

char *ft_strnstr(char *fullString, char *substring, size_t size) {
    if (*substring == '\0')
        return fullString;
    return isInString(fullString, substring, size);
}