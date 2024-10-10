//
// Created by evanr on 09/10/2024.
//

#include <stdio.h>

#include "ft_libft.h"

int ft_strncmp(const char *first, const char *second, size_t size) {
    if ((int)size < 0)
        return -1;
    while (size) {
        if (*first != *second) {
            return *first - *second;
        }
        size--;
        first++;
        second++;
    }
    return 0;
}