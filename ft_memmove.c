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

void test_memmove() {
    char src1[] = "Hello, world!";
    char dest1[20];
    ft_memmove(dest1, src1, 13);
    printf("Test 1 (Normal): '%s'\n", dest1); // Expected: "Hello, world!"

    char src2[] = "Overlap Test";
    ft_memmove(src2 + 3, src2, 5);
    printf("Test 2 (Overlap): '%s'\n", src2); // Expected: "Oveverl Test"

    char src3[] = "Memmove Forward";
    ft_memmove(src3, src3 + 8, 7);
    printf("Test 3 (Forward Overlap): '%s'\n", src3); // Expected: "Forward Forward"

    char src4[] = "Complete overlap";
    ft_memmove(src4, src4, 10);
    printf("Test 4 (Complete overlap): '%s'\n", src4); // Expected: "Complete overlap"

    char src5[] = "Zero test";
    char dest5[20] = "Unchanged";
    ft_memmove(dest5, src5, 0);
    printf("Test 5 (Size 0): '%s'\n", dest5); // Expected: "Unchanged"
}

int main() {
    test_memmove();
    return 0;
}