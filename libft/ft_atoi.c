/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravi-ch <dravi-ch@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:20:15 by dravi-ch          #+#    #+#             */
/*   Updated: 2023/05/25 14:17:42 by dravi-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	s;
	int	nb;

	i = 0;
	s = 1;
	nb = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			s *= -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i++] - '0');
	}
	return (nb * s);
}
/*
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str);

int main(void) {
    char str1[] = "12345";
    char str2[] = "-54321";
    char str3[] = "12.34";
    char str4[] = "   6789  ";
    char str5[] = "     ";
    char str6[] = "9223372036854775808";
    char str7[] = "-9223372036854775809";
    char str8[] = "12345678901234567890";
    char str9[] = "-12345678901234567890";

    printf("str1: \"%s\"\n", str1);
    printf("ft_atoi(str1): %d\n", ft_atoi(str1));

    printf("str2: \"%s\"\n", str2);
    printf("ft_atoi(str2): %d\n", ft_atoi(str2));

    printf("str3: \"%s\"\n", str3);
    printf("ft_atoi(str3): %d\n", ft_atoi(str3));

    printf("str4: \"%s\"\n", str4);
    printf("ft_atoi(str4): %d\n", ft_atoi(str4));

    printf("str5: \"%s\"\n", str5);
    printf("ft_atoi(str5): %d\n", ft_atoi(str5));

    printf("str6: \"%s\"\n", str6);
    printf("ft_atoi(str6): %d\n", ft_atoi(str6));

    printf("str7: \"%s\"\n", str7);
    printf("ft_atoi(str7): %d\n", ft_atoi(str7));

    printf("str8: \"%s\"\n", str8);
    printf("ft_atoi(str8): %d\n", ft_atoi(str8));

	printf("str9: \"%s\"\n", str9);
    printf("ft_atoi(str9): %d\n", ft_atoi(str9));

    return 0;
}
*/
