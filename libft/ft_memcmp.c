/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravi-ch <dravi-ch@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 13:18:01 by dravi-ch          #+#    #+#             */
/*   Updated: 2023/05/12 15:04:38 by dravi-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*s11;
	unsigned char	*s22;

	s11 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	i = 0;
	while (i < n && s11[i] == s22[i])
		i++;
	if (i == n)
		return (0);
	else
		return (s11[i] - s22[i]);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[] = "hello";
    char str2[] = "world";
    char str3[] = "hello";
    int result1, result2, result3;

    // compare first 2 characters of str1 and str2
    result1 = ft_memcmp(str1, str2, 2);
    printf("result1: %d\n", result1); // should output a negative number

    // compare first 2 characters of str1 and str3
    result2 = ft_memcmp(str1, str3, 2);
    printf("result2: %d\n", result2); // should output 0

    // compare entire strings str1 and str3
    result3 = ft_memcmp(str1, str3, strlen(str1));
    printf("result3: %d\n", result3); // should output 0

    return 0;
}
*/
