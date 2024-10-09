//
// Created by evanr on 09/10/2024.
//

#include "ft_libft.h"

int strncmp(const char *first, const char *second, size_t size) {
    while (size) {
        if (first != second) {
            return *first - *second;
        }
        size--;
        first++;
        second++;
    }
    return 0;
}