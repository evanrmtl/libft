//
// Created by evanr on 05/10/2024.
//

#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>

void *ft_memset(void *pointer, int value, size_t count);

void *ft_memset(void *str, int c, size_t n);

void *ft_memcpy(void *dest, void *source, size_t size);

void *ft_memmove( void *dest, void *source, size_t size);

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize);

size_t ft_strlcat(char *dest, const char *source, size_t size);

#endif //LIBFT_H
