//
// Created by evanr on 05/10/2024.
//

#include "libft.h"

void ft_bzero(void *s, size_t n) {
    unsigned char *p = s;
    for (size_t i = 0; i < n; i++) {
        p[i] = 0;
    }
}