//
// Created by evanr on 08/10/2024.
//
#include "ft_libft.h"

size_t ft_strlcat(char *dest, const char *source, size_t size) {
    if (dest == NULL || source == NULL)
        return 0;
    size_t i = 0;
    while (dest[i] != '\0' && i < size)
        i++;
    if (i < size) {
        int j = 0;
        while (i < size && source[j] != '\0') {
            dest[i] = source[j];
            j++;
            i++;
        }
    }
    dest[size - 1] = '\0';
    return i;
}