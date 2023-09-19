// ft_memcpy.c
void *ft_memcpy(void *dest, const void *src, size_t n)
{
    char *d = dest;
    const char *s = src;
    while (n--)
        *d++ = *s++;
    return dest;
}

// main_memcpy.c
#include <stdio.h>
#include <string.h>
#include "libft.h"

int main()
{
    char src[10] = "Hello";
    char dest[10];
    ft_memcpy(dest, src, 5);
    printf("ft_memcpy: %s\n", dest);
    memcpy(dest, src, 5);
    printf("memcpy: %s\n", dest);
    return 0;
}

