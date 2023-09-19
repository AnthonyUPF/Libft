// ft_strlcpy.c
size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t len = 0;
    while (src[len] && len + 1 < size)
    {
        dest[len] = src[len];
        len++;
    }
    if (size > 0)
        dest[len] = '\0';
    while (src[len])
        len++;
    return len;
}

// main_strlcpy.c
#include <stdio.h>
#include <string.h>
#include "libft.h"

int main()
{
    char src[10] = "Hello";
    char dest[5];
    size_t len = ft_strlcpy(dest, src, 5);
    printf("ft_strlcpy: %s, len: %lu\n", dest, len);
    return 0;
}

