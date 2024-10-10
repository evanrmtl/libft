//
// Created by erimonteil on 10/10/24.
//
#include "ft_libft.h"

int ft_toupper(int character) {
    if(character >= 'a' && character <= 'z')
        return character - 32;
    return character;
}
