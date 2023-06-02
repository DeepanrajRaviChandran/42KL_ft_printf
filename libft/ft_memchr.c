/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravi-ch <dravi-ch@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 18:23:47 by dravi-ch          #+#    #+#             */
/*   Updated: 2023/05/11 19:51:04 by dravi-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*s1;
	unsigned char	c1;

	s1 = (unsigned char *)s;
	c1 = (unsigned char)c;
	i = 0;
	if (!s1)
		return (NULL);
	while (i < n)
	{
		if (s1[i] == c1)
			return ((void *)&s1[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, world!";
    char *result1 = memchr(str, 'w', strlen(str));
    char *result2 = ft_memchr(str, 'w', strlen(str));

    printf("memchr result: %s\n", result1);
    printf("ft_memchr result: %s\n", result2);

    return 0;
}
*/
