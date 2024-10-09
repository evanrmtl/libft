//
// Created by evanr on 07/10/2024.
//
#include <stdio.h>

#include "ft_libft.h"

size_t ft_strlcpy( char *dest, const char *source,  size_t size) {
    size_t i = 0;
    while (i < size) {
        dest[i] = source[i];
        i++;
    }
    size_t s = 0;
    while (source[s] != '\0')
        s++;
    dest[size - 1] = '\0';
    return s;
}