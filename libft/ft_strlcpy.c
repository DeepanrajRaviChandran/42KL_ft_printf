/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravi-ch <dravi-ch@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 20:30:15 by dravi-ch          #+#    #+#             */
/*   Updated: 2023/05/25 17:19:02 by dravi-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	results;

	if (dest == NULL || src == NULL)
		return (0);
	results = 0;
	while (src[results])
		results++;
	if (size < 1)
		return (results);
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (results);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char dest[10];
    const char *src = "Hello, world!";
    size_t n = ft_strlcpy(dest, src, sizeof(dest));

    printf("ft_strlcpy result: %s, returned length: %zu\n", dest, n);
    return 0;
}
*/
