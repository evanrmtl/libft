//
// Created by evanr on 05/10/2024.
//

#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>

int ft_atoi( const char * theString );

void ft_bzero(void *s, size_t n);

void *ft_memchr(const void *memoryBlock, int searchedChar, size_t size);

int ft_memcmp(const void *pointer1, const void *pointer2, size_t size);

void *ft_memcpy(void *dest, void *source, size_t size);

void *ft_memmove(void *source, void *dest, size_t size);

void *ft_memset(void *str, int c, size_t n);

char *strchr(const char *string, int searchedChar);

char * ft_strdup(const char * source );

size_t ft_strlcat(char *dest, const char *source, size_t size);

size_t ft_strlcpy( char *dest, const char *source,  size_t size);

int ft_strlen(char *str);

int strncmp( const char * first, const char * second, size_t length );

char * ft_strnstr(char * fullString, char * substring );

char * strrchr( const char * string, int searchedChar );

#endif //LIBFT_H
