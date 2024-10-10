//
// Created by erimonteil on 07/10/24.
//
#include "ft_libft.h"

void * ft_memchr( const void * memoryBlock, int searchedChar, size_t size ) {
    const char *block = (const char *)memoryBlock;
    char toSearch = (char)searchedChar;
    size_t i = 0;
    while(i < size) {
        if (block[i] == toSearch) {
            return (void *)&block[i];
        }
        i++;
    }
    return NULL;
}