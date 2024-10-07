//
// Created by evanr on 05/10/2024.
//

#include "libft.h"
#include <stdlib.h>

void *ft_memset(void *pointer, int value, size_t count) {
    unsigned char *p = pointer;
    for (size_t i = 0; i < count; i++) {
        p[i] = value;
    }
    return p;
}