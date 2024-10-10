//
// Created by erimonteil on 07/10/24.
//

#include "ft_libft.h"

char * ft_strdup(const char * source ) {
    if(source == NULL)
        return 0;
    int len = 0;
    const char *temp = source;
    while(*temp != '\0') {
        len++;
        temp++;
    }
    char *dup = malloc(sizeof(char) * (len +1));
    if(dup == NULL)
        return 0;
    char *dupTemp = dup;
    while(*source != '\0'){
        *dupTemp = *source;
        dupTemp++;
        source++;
    }
    *dupTemp = '\0';
    return dup;
}