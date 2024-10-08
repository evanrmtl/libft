//
// Created by evanr on 05/10/2024.
//
#include "libft.h"

void *ft_memmove( void *source, void *dest, size_t size) {
    if (dest == NULL || source == NULL)
        return NULL;
    unsigned char *psource = source;
    unsigned char *pdest = dest;
    if (pdest < psource) {
        for (size_t i = 0; i < size; i++) {
            pdest[i] = psource[i];
        }
    } else {
        for (size_t i = size; i > 0; i--) {
            pdest[i - 1] = psource[i - 1];
        }
    }
    return dest;
}