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

char *ft_strjoin(char const *s1, char const *s2) {
    int totalLen = length((char *)s1) + length((char *) s2) + 1);
    char *toReturn = malloc(sizeof(char) * totalLen);
    if(toReturn == NULL)
        return NULL;
    char *temp = toReturn;
    while(s1 != '\0') {
        *temp = *s1;
        temp++;
        s1++;
    }
    while(s2 != '\0') {
        *temp = *s2;
        temp++;
        s2++;
    }
    *temp++ = '\0';
    return toReturn;
}