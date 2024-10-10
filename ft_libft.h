//
// Created by evanr on 05/10/2024.
//

#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>

int ft_atoi(const char *theString);

void ft_bzero(void *s, size_t n);

void *ft_calloc(size_t elementCount, size_t elementSize);

int ft_isalnum(int character);

int ft_isalpha(int character);

int ft_isascii(int chararcter);

int ft_isdigit(int character);

int ft_isprint(int character);

void *ft_memchr(const void *memoryBlock, int searchedChar, size_t size);

int ft_memcmp(const void *pointer1, const void *pointer2, size_t size);

void *ft_memcpy(void *dest, const void *source, size_t size);

void *ft_memmove(void *dest, void *source, size_t size);

void *ft_memset(void *str, int c, size_t n);

char *ft_strchr(const char *string, int searchedChar);

char *ft_strdup(const char *source);

char *ft_strjoin(char const *s1, char const *s2);

size_t ft_strlcat(char *dest, const char *source, size_t size);

size_t ft_strlcpy(char *dest, const char *source, size_t size);

int ft_strlen(char *str);

int ft_strncmp(const char *first, const char *second, size_t size);

char *ft_strnstr(char *fullString, char *substring, size_t size);

char *ft_substr(char const *s, unsigned int start, size_t len);

int ft_tolower(int character);

int ft_toupper(int character);

char *ft_strrchr(const char *string, int searchedChar);

#endif //LIBFT_H
