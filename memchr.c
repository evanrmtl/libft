//
// Created by erimonteil on 07/10/24.
//
#include "libft.h"

void * ft_memchr( const void * memoryBlock, int searchedChar, size_t size ) {
    const unsigned char *block = memoryBlock;
    while(size) {
        if (block[size-1] == searchedChar) {
            return (void *)&block[size-1];
        }
        size--;
    }
    return NULL;
}

int main(void){
    return 1;
}