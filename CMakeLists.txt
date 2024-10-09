cmake_minimum_required(VERSION 3.28)
project(libft C)

set(CMAKE_C_STANDARD 11)

add_executable(libft
        ft_memchr.c
        ft_bzero.c
        ft_memcmp.c
        ft_memcpy.c
        ft_memmove.c
        ft_memset.c
        ft_strdup.c
        ft_strlcat.c
        ft_strlcpy.c
        ft_strlcpy.c
        ft_strchr.c
        ft_strlen.c
        ft_strrchr.c
        ft_strnstr.c
        ft_strncmp.c
        ft_atoi.c
)
