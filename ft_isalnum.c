//
// Created by erimonteil on 10/10/24.
//
#include "ft_libft.h"

int ft_isalnum( int character ) {
    return character >= 48 && character <= 57
        || character >= 65 && character <= 90
        || character >= 97 && character <= 122;
}