/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravi-ch <dravi-ch@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 16:48:34 by dravi-ch          #+#    #+#             */
/*   Updated: 2023/05/10 12:28:45 by dravi-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest > src)
	{
		while (n > 0)
		{
			((char *)dest)[n - 1] = ((char *)src)[n - 1];
			n--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n);

int main()
{
    // Test case 1: copy 10 bytes from src to dest
    char src[] = "Hello World";
    char dest[20] = "Goodbye";
    ft_memmove(dest, src, 10);
    printf("ft_memove Test case 1: dest = %s\n", dest);
	memmove(dest, src, 10);
    printf("memmove Test case 1: dest = %s\n", dest);

    // Test case 2: copy 5 bytes from src to dest
    char src2[] = "Testing";
    char dest2[20] = "abcdefghij";
    ft_memmove(dest2, src2, 5);
    printf("ft_memmove Test case 2: dest2 = %s\n", dest2);
	memmove(dest2, src2, 5);
    printf("memmove Test case 2: dest2 = %s\n", dest2);

    // Test case 3: copy 0 bytes from src to dest
    char src3[] = "12345";
    char dest3[] = "67890";
    ft_memmove(dest3, src3, 0);
    printf("ft_memmove Test case 3: dest3 = %s\n", dest3);
	memmove(dest3, src3, 0);
    printf("memmove Test case 3: dest3 = %s\n", dest3);

    // Test case 4: copy 10 bytes from dest to itself (overlapping)
    char dest4[] = "abcdefghij";
    ft_memmove(dest4 + 3, dest4, 10);
    printf("ft_memmove Test case 4: dest4 = %s\n", dest4);
	memmove(dest4 + 3, dest4, 8);
    printf("memmove Test case 4: dest4 = %s\n", dest4);

    // Test case 5: NULL inputs
    char *src5 = NULL;
    char *dest5 = NULL;
    ft_memmove(dest5, src5, 5);
    printf("ft_memmove Test case 5: dest5 = %s\n", dest5);
	memmove(dest5, src5, 5);
    printf("memmove Test case 5: dest5 = %s\n", dest5);

    return 0;
}
*/
