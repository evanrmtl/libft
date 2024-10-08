//
// Created by evanr on 05/10/2024.
//
#include "libft.h"

void *ft_memcpy(void *dest, void *source, size_t size) {
    if(dest == NULL || source == NULL)
        return NULL;
    unsigned char *pdest = dest;
    unsigned char *psource = source;
    if (psource + size > pdest) {
        for (size_t i = size; i > 0; i--) {
            pdest[i-1] = psource[i-1];
        }
    }
    else {
        for(size_t i = 0; i < size; i++) {
            pdest[i] = psource[i];
        }
    }
    return dest;
}