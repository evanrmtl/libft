//
// Created by evanr on 05/10/2024.
//
#include "ft_libft.h"

void *ft_memset(void *str, int c, size_t n) {
    unsigned char *p = str;
    for (size_t i = 0; i < n; i++) {
        p[i] = c;
    }
    return p;
}