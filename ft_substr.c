/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthtorr <anthtorr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:35:56 by anthtorr          #+#    #+#             */
/*   Updated: 2023/09/29 17:19:58 by anthtorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_st_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	sub_len;
	char	*substr;
	size_t	i;

	s_len = ft_st_strlen(s);
	if (start >= s_len)
		return (malloc(1));
	if (len < (s_len - start))
		sub_len = len;
	else
		sub_len = s_len - start;
	substr = malloc(sub_len + 1);
	if (substr != NULL)
	{
		i = 0;
		while (i < sub_len)
		{
			substr[i] = s[start + i];
			i++;
		}
		substr[i] = '\0';
	}
	return (substr);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(void){
    const char *s = "Hello, World!";
    unsigned int start = 7;
    size_t len = 3;

    char *substr = ft_substr(s, start, len);

    printf("Resultado: %s\n", substr);

    free(substr); 

    return 0;
}
*/
