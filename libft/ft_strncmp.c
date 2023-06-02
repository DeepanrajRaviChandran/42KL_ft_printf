/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravi-ch <dravi-ch@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:39:51 by dravi-ch          #+#    #+#             */
/*   Updated: 2023/05/12 15:06:08 by dravi-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*s11;
	unsigned char	*s22;

	s11 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	i = 0;
	while (s11[i] && s22[i] && i < n && s11[i] == s22[i])
		i++;
	if (i == n)
		return (0);
	else
		return (s11[i] - s22[i]);
}
/*
#include <stdio.h>

int main() {
    char str1[] = "Hello, world!";
    char str2[] = "Hello, everyone!";

    int result1 = ft_strncmp(str1, str2, 6);
    int result2 = ft_strncmp(str2, str1, 10);
    int result3 = ft_strncmp(str2, str1, 6);

    printf("Comparison 1 result: %d\n", result1);
    printf("Comparison 2 result: %d\n", result2);
    printf("Comparison 3 result: %d\n", result3);

    return 0;
}
*/
