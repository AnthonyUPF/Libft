#include <stddef.h>

void ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
}

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
    char str[10] = "Hello";
    ft_bzero(str, 5);
    printf("ft_bzero: %s\n", str);
    bzero(str, 5);
    printf("bzero: %s\n", str);
    return 0;
}
