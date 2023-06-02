/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravi-ch <dravi-ch@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 12:32:05 by dravi-ch          #+#    #+#             */
/*   Updated: 2023/05/10 13:06:00 by dravi-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	int				src_len;
	unsigned int	dest_len;
	unsigned int	i;

	i = 0;
	src_len = 0;
	dest_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size == 0)
		return (src_len);
	while (dest_len < size && dest[dest_len] != '\0')
		dest_len++;
	if (size <= dest_len)
		return (size + src_len);
	i = 0;
	while (size && (--size - dest_len) && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (src_len + dest_len);
}
/*
#include <stdio.h>
#include <string.h>

size_t ft_strlcat(char *dest, const char *src, size_t size);

int main() {
    char dest[20] = "Hello, ";
    char *src = "world!";
    size_t size = sizeof(dest);

    printf("Before: dest = %s, src = %s\n", dest, src);

    size_t result = ft_strlcat(dest, src, size);

    printf("After: dest = %s, src = %s\n", dest, src);
    printf("ft_strlcat result: %zu\n", result);
    printf("Expected result: %zu\n", strlen("Hello, world!"));

    return 0;
}
*/
