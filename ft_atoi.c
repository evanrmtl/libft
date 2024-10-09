//
// Created by evanr on 09/10/2024.
//

#include <stdio.h>

#include "ft_libft.h"

int ft_atoi(const char *theString) {
    if(*theString == '\0')
        return 0;
    int power = 1;
    int toReturn = 1;
    char *temp = (char *)theString;
    while (*temp != '\0' && *temp > 47 && *temp < 58) {
        power *= 10;
        temp++;
    }
    while(power >= 1) {
        toReturn = *theString * power;
        theString++;
        power /= 10;
    }
    return toReturn;
}

int main() {
    printf("Test 1: atoi(\"1234\") = %d\n", ft_atoi("1234")); // Attendu : 1234

    printf("Test 2: atoi(\"-1234\") = %d\n", ft_atoi("-1234")); // Attendu : -1234

    printf("Test 3: atoi(\"   567\") = %d\n", ft_atoi("   567")); // Attendu : 567

    printf("Test 4: atoi(\"789abc\") = %d\n", ft_atoi("789abc")); // Attendu : 789

    printf("Test 5: atoi(\"abc1234\") = %d\n", ft_atoi("abc1234")); // Attendu : 0

    printf("Test 6: atoi(\"2147483647\") = %d\n", ft_atoi("2147483647")); // Attendu : 2147483647 (INT_MAX)

    printf("Test 7: atoi(\"-2147483648\") = %d\n",ft_atoi("-2147483648")); // Attendu : -2147483648 (INT_MIN)

    printf("Test 8: atoi(\"\") = %d\n", ft_atoi("")); // Attendu : 0

    printf("Test 9: atoi(\"0\") = %d\n", ft_atoi("0")); // Attendu : 0

    printf("Test 10: atoi(\"--42\") = %d\n", ft_atoi("--42")); // Attendu : 0

    return 0;
}