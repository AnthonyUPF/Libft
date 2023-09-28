/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthtorr <anthtorr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:30:55 by anthtorr          #+#    #+#             */
/*   Updated: 2023/09/28 12:40:22 by anthtorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    const char str[] = "Hello, world!";
    int c = 'o';
    char* result = ft_strchr(str, c);
    char* original_result = strchr(str, c);

    if (result != NULL) {
        printf("Resultado de ft_strchr: %s\n", result);
    } else {
        printf("El caracter no se encontró en la cadena.\n");
    }

    if (original_result != NULL) {
        printf("Resultado de strchr: %s\n", original_result);
    } else {
        printf("El caracter no se encontró en la cadena (original).\n");
    }

    return 0;
}
*/
