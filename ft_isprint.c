//
// Created by erimonteil on 10/10/24.
//
#include <ctype.h>

#include "ft_libft.h"

int ft_isprint( int character ) {
    return character >= 33 && character <= 126;
}