cmake_minimum_required(VERSION 3.28)
project(libft C)

set(CMAKE_C_STANDARD 11)

add_executable(libft
        memset.c
        libft.h
        bzero.c
        memcpy.c
        ft_memmove.c
        strlcpy.c)
