//
// Created by evanr on 05/10/2024.
//

#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <assert.h>
#include <string.h>

void *ft_memset(void *pointer, int value, size_t count);

void *ft_bzero(void *s, size_t n);

void *ft_memcpy(void *dest, void *source, size_t size);

void *ft_memmove(void *source, void *dest, size_t size);

#endif //LIBFT_H
