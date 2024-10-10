//
// Created by erimonteil on 10/10/24.
//
#include "ft_libft.h"

int ft_isalpha( int character ) {
    if(character >= 91)
        character -= 32;
    return character >= 65 && character <= 90;
}