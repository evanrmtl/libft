//
// Created by erimonteil on 07/10/24.
//
#include "libft.h"

int ft_memcmp( const void * pointer1, const void * pointer2, size_t size ) {
    const unsigned char *tab1 = pointer1;
    const unsigned char *tab2 = pointer2;
    while(size) {
        if(tab1[size-1] != tab2[size-1]) {
            return tab1[size-1] - tab2[size-1];
        }
        size--;
    }
    return 0;
}