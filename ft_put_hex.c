/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravi-ch <dravi-ch@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 22:06:50 by dravi-ch          #+#    #+#             */
/*   Updated: 2023/06/02 17:40:54 by dravi-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len_hex(unsigned	int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		n /= 16;
		len++;
	}
	return (len);
}

/*Writes Hex values based on format specifier(x & X) and returns length of Hex*/
int	ft_put_hex(unsigned int n, const char f_s)
{
	char	*hex;

	if (f_s == 'x')
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";
	if (n >= 16)
	{
		ft_put_hex(n / 16, f_s);
		ft_put_hex(n % 16, f_s);
	}
	else
		ft_putchar_fd(hex[n], 1);
	return (ft_len_hex(n));
}
