//
// Created by erimonteil on 07/10/24.
//

#include "ft_libft.h"

int ft_strlen(char *str) {
    if(*str == '\0')
        return 0;
    int len = 0;
    while(*str != '\0') {
        len++;
        str++;
    }
    return len;
}