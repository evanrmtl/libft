//
// Created by evanr on 05/10/2024.
//

#include <stdio.h>

#include "libft.h"

void *ft_memmove(void *dest, void *source, size_t size) {
    unsigned char *psource = source;
    unsigned char *pdest = dest;
    if (source < dest) {
        for (size_t i = size; i > 0; i--) {
            pdest[i - 1] = psource[i - 1];
        }
    } else {
        for (size_t i = 0; i < size; i++) {
            pdest[i] = psource[i];
        }
    }
    pdest[size] = '\0';
    return dest;
}

int main() {
    char buffer[10] = "123456789"; // Une chaîne de 10 caractères
    printf("%s\n", buffer);
    ft_memmove(buffer + 2, buffer, 8); // On essaie de déplacer 8 caractères
    printf("%s\n", buffer);
    return 0;
}
