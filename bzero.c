//
// Created by evanr on 05/10/2024.
//

#include "libft.h"

void *ft_bzero(void *s, size_t n) {
    return ft_memset(s, 0, n);
}