//
// Created by evanr on 07/10/2024.
//

#include "libft.h"

char *ft_strlcpy(const char *source, char *dest, size_t size) {
    if (size == 0)
        return NULL;
    size_t i = 0;
    while (i < size) {
        dest[i] = source[i];
        i++;
    }
    dest[size - 1] = '\0';
    return dest;
}