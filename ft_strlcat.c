/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthtorr <anthtorr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:33:08 by anthtorr          #+#    #+#             */
/*   Updated: 2023/09/28 12:18:54 by anthtorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_st_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

static char	*ft_st_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (src[i] && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	copy_len;

	dst_len = ft_st_strlen(dst);
	src_len = ft_st_strlen(src);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	copy_len = dstsize - dst_len - 1;
	ft_st_strncpy(dst + dst_len, src, copy_len);
	dst[dst_len + copy_len] = '\0';
	return (dst_len + src_len);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
    char dst1[10] = "Hello";
    char dst2[10] = "Hello";
    char src[5] = "World";
	size_t len1 = ft_strlcat(dst1, src, sizeof(dst1));
	size_t len2 = strlcat(dst2, src, sizeof(dst2));
    printf("ft_strlcat: %s, len: %zu\n", dst1, len1);
    printf("strlcat: %s, len: %zu\n",  dst2, len2);
    return 0;
}
*/
