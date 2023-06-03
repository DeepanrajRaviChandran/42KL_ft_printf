/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravi-ch <dravi-ch@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 13:03:42 by dravi-ch          #+#    #+#             */
/*   Updated: 2023/06/03 14:22:51 by dravi-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_nbr_len(int n)
{
	int	len;

	len = 0;
	if (n < 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

/*Used for d and i format specifier and returns the len of number*/
int	ft_put_nbr(int n)
{
	if (n < 0)
	{
		ft_putchar_fd('-', 1);
		n = -n;
	}
	if (n >= 10)
	{
		ft_put_nbr(n / 10);
		ft_put_nbr(n % 10);
	}
	else
		ft_putchar_fd(n + '0', 1);
	return (ft_nbr_len(n));
}
