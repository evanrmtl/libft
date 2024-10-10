//
// Created by evanr on 09/10/2024.
//

#include "ft_libft.h"

int ft_atoi(const char *theString) {
    if (*theString == '\0')
        return 0;
    int toReturn = 0, isNegative = 0;
    long int power = 1;
    char *temp = (char *) theString;
    while (*temp != '\0' && ((*temp > 47 && *temp < 58) || (*temp == 45 && isNegative == 0) || *temp == 32)) {
        if(*temp == 32)
            theString++;
        else if (*temp == 45) {
            isNegative = 1;
            theString++;
        } else
            power *= 10;
        temp++;
    }
    power /= 10;
    while (power >= 1) {
        toReturn += (*theString% 48) * power;
        theString++;
        power /= 10;
    }
    if (isNegative)
        toReturn *= -1;
    return toReturn;
}