// ft_strlcat.c
size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t dest_len = ft_strlen(dest);
    size_t src_len = ft_strlen(src);
    if (size <= dest_len)
        return size + src_len;
    size_t copy_len = size - dest_len - 1;
    ft_strncpy(dest + dest_len, src, copy_len);
    dest[dest_len + copy_len] = '\0';
    return dest_len + src_len;
}

// main_strlcat.c
#include <stdio.h>
#include <string.h>
#include "libft.h"

int main()
{
    char dest[10] = "Hello";
    char src[5] = "World";
    size_t len = ft_strlcat(dest, src, 10);
    printf("ft_strlcat: %s, len: %lu\n", dest, len);
    return 0;
}

