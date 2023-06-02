/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravi-ch <dravi-ch@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 22:50:03 by dravi-ch          #+#    #+#             */
/*   Updated: 2023/05/25 19:03:55 by dravi-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(int n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n >= 10)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static void	ft_putnbr_stock(long n, char *str, int *i)
{
	if (n > 9)
	{
		ft_putnbr_stock(n / 10, str, i);
		ft_putnbr_stock(n % 10, str, i);
	}
	else
	{
		str[*i] = n + '0';
		(*i)++;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	nbr;

	nbr = n;
	str = malloc(sizeof(char) * (num_len(nbr) + 1));
	if (!str)
		return (NULL);
	i = 0;
	if (nbr < 0)
	{
		str[i++] = '-';
		nbr *= -1;
	}
	ft_putnbr_stock(nbr, str, &i);
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>

// Paste the ft_itoa() implementation here

int main() {
    int test_cases[] = {0, 123, -456, 7890, -12345};
    int num_tests = sizeof(test_cases) / sizeof(test_cases[0]);

    for (int i = 0; i < num_tests; i++) {
        int num = test_cases[i];
        char* str = ft_itoa(num);
        if (str != NULL) {
            printf("Integer: %d\n", num);
            printf("String: %s\n", str);
            free(str);
        } else {
            printf("Memory allocation failed for num = %d\n", num);
        }
        printf("------------------------------\n");
    }

    return 0;
}
*/
