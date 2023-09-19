// ft_memmove.c
void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d = dest;
    const unsigned char *s = src;
    unsigned char *tmp = malloc(n);
    if (!tmp)
        return NULL;
    ft_memcpy(tmp, s, n);
    ft_memcpy(d, tmp, n);
    free(tmp);
    return dest;
}

// main_memmove.c
#include <stdio.h>
#include <string.h>
#include "libft.h"

int main()
{
    char str[10] = "Hello";
    ft_memmove(str + 2, str, 3);
    printf("ft_memmove: %s\n", str);
    return 0;
}

