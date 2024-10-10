//
// Created by erimonteil on 10/10/24.
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

char *ft_strtrim(char const *s1, char const *set) {
    int lenS1 = length((char *)s1) + 1;
    char *toReturn = malloc(sizeof(char *) * lenS1);
    if(toReturn == NULL)
        return NULL;
    while(s1 != '\0'){

    }
    return toReturn;
}