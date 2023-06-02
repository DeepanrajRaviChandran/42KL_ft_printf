/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravi-ch <dravi-ch@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 07:33:19 by dravi-ch          #+#    #+#             */
/*   Updated: 2023/05/08 08:52:39 by dravi-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	if (b == NULL)
		return (NULL);
	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		*(ptr + i) = (unsigned char)c;
		i++;
	}
	return (b);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "Hello, world!";
    int num[] = {1, 2, 3, 4, 5};
    int len_str = strlen(str);
    int len_num = sizeof(num) / sizeof(num[0]);
    int i;

    printf("Before memset:\n");
    printf("str = %s\n", str);
    printf("num = ");
    for (i = 0; i < len_num; i++)
        printf("%d ", num[i]);
    printf("\n");

    ft_memset(str, 'A', len_str);
    ft_memset(num, 0, len_num * sizeof(num[0]));

    printf("After memset:\n");
    printf("str = %s\n", str);
    printf("num = ");
    for (i = 0; i < len_num; i++)
        printf("%d ", num[i]);
    printf("\n");

    return 0;
}
*/
