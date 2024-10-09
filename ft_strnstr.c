//
// Created by evanr on 09/10/2024.
//
#include "ft_libft.h"

int length(char *str) {
    if (*str == '\0')
        return 0;
    int len = 0;
    while (*str != '\0') {
        len++;
        str++;
    }
    return len;
}

char *isInString(char *fullString, char *substring, int len) {
    int i = 0;
    char *startSub = substring;
    char *toReturn;
    while (*fullString != '\0') {
        if (*fullString == *substring) {
            if (i == 0) {
                startSub = substring;
                toReturn = fullString;
            }
            substring++;
            fullString++;
            i++;
            if (i == len)
                return toReturn;
        }
        else {
            substring = startSub;
            fullString++;
            i = 0;
        }
    }
    return NULL;
}

char *ft_strnstr(char *fullString, char *substring) {
    if (*substring == '\0')
        return fullString;
    return isInString(fullString, substring,length(substring));
}