/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthtorr <anthtorr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 20:48:24 by anthtorr          #+#    #+#             */
/*   Updated: 2023/09/28 20:53:07 by anthtorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			total_size;
	void			*ptr;
	unsigned char	*p;

	total_size = count * size;
	ptr = malloc(total_size);
	if (ptr != NULL)
	{
		p = (unsigned char *) ptr;
		while (total_size--)
		{
			*p = 0;
			p++;
		}
	}
	return (ptr);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    size_t count = 5;
    size_t size = sizeof(int);

    int* result = (int*)ft_calloc(count, size);
    if (result != NULL) {
        for (size_t i = 0; i < count; i++) {
            printf("%d ", result[i]);
        }
        printf("\n");

        free(result);
    } else {
        printf("La asignación de memoria falló.\n");
    }

    return 0;
}
*/
