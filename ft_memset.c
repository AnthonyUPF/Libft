#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
    unsigned char *ptr = s;

    while (n--)
    {
        *ptr++ = c;
    }
    return (s);
}

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
    char str[10];
    ft_memset(str, 'A', 5);
    printf("ft_memset: %s\n", str);
    memset(str, 'B', 5);
    printf("memset: %s\n", str);
    return 0;
}

