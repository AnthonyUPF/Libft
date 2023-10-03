/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthtorr <anthtorr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:41:21 by anthtorr          #+#    #+#             */
/*   Updated: 2023/10/03 15:39:35 by anthtorr         ###   ########.fr       */
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

char	*ft_strrchr(const char *s, int c)
{
	const char	*last_occurrence;

	if (c == '\0')
		return ((char *)s + ft_st_strlen(s));
	last_occurrence = NULL;
	while (*s)
	{
		if (*s == c)
			last_occurrence = s;
		s++;
	}
	return ((char *) last_occurrence);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    const char str[] = "Hello, world!";
    int c = 'o';
    char* result = ft_strrchr(str, c);
    char* original_result = strrchr(str, c);

    if (result != NULL) {
        printf("Resultado de ft_strrchr: %s\n", result);
    } else {
        printf("El caracter no se encontró en la cadena.\n");
    }

    if (original_result != NULL) {
        printf("Resultado de strrchr: %s\n", original_result);
    } else {
        printf("El caracter no se encontró en la cadena (original).\n");
    }

    return 0;
}
*/
