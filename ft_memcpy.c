/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthtorr <anthtorr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 19:34:52 by anthtorr          #+#    #+#             */
/*   Updated: 2023/09/20 19:40:00 by anthtorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    char *temp_dst = dst;
    const char *temp_src = src;
    while (n--)
        *temp_dst++ = *temp_src++;
    return (dst);
}

#include <stdio.h>
#include <string.h>

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

