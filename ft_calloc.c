//
// Created by erimonteil on 10/10/24.
//
#include "ft_libft.h"

void * ft_calloc( size_t elementCount, size_t elementSize ) {
    void *toReturn = malloc(elementCount * elementSize);
    unsigned char *temp = toReturn;
    for(size_t i = 1; i <= elementCount; i++) {
        temp[i-1] = 0;
    }
    return toReturn;
}