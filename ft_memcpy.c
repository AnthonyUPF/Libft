/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthtorr <anthtorr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 19:34:52 by anthtorr          #+#    #+#             */
/*   Updated: 2023/09/22 18:01:26 by anthtorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char		*tmp_dst;
	const char	*tmp_src;

	tmp_dst = dst;
	tmp_src = src;
	while (n--)
		*tmp_dst++ = *tmp_src++;
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
    char src[] = "Hello mundo";
    char dest1[15];
	char dest2[15];
    ft_memcpy(dest1, src, sizeof(src));
    printf("ft_memcpy: %s\n", dest1);
    memcpy(dest2, src, sizeof(src));
    printf("memcpy: %s\n", dest2);
    return 0;
}
*/
