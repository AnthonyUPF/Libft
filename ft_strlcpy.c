/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthtorr <anthtorr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:22:52 by anthtorr          #+#    #+#             */
/*   Updated: 2023/09/26 14:24:51 by anthtorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t len;

    len = 0;
    while (src[len] && len + 1 < size)
    {
        dest[len] = src[len];
        len++;
    }
    if (size > 0)
        dest[len] = '\0';
    while (src[len])
        len++;
    return (len);
}

#include <stdio.h>
#include <string.h>

int main()
{
    char src[10] = "Hello";
    char dest[5];
    size_t len = ft_strlcpy(dest, src, 5);
    printf("ft_strlcpy: %s, len: %lu\n", dest, len);
    return 0;
}

