/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravi-ch <dravi-ch@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:02:55 by dravi-ch          #+#    #+#             */
/*   Updated: 2023/05/09 19:47:53 by dravi-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dest1;
	char	*src1;

	dest1 = (char *)dest;
	src1 = (char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int main() {
    char src[100] = "This is a test";
    char dest[100];
    ft_memcpy(dest, src, sizeof(src));
    printf("Copied string is: %s\n", dest);
    return 0;
}
*/
