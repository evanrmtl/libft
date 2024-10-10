//
// Created by erimonteil on 10/10/24.
//

#include "ft_libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len) {
    char *toReturn = malloc(sizeof(s)* (len-start));
    if (toReturn == NULL)
        return NULL;
    return toReturn;
}