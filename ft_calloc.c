//
// Created by erimonteil on 10/10/24.
//
#include "ft_libft.h"

void * calloc( size_t elementCount, size_t elementSize ) {
    void *toReturn = malloc(elementCount * elementSize);
    unsigned char *temp = toReturn;
    for(int i = 0; i < elementCount; i++) {
        temp[i] = 0;
    }
    return toReturn;
}