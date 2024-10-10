//
// Created by erimonteil on 10/10/24.
//
#include "ft_libft.h"

int ft_tolower(int character) {
    if(character >= 'A' && character <= 'Z')
        return character + 32;
    return character;
}