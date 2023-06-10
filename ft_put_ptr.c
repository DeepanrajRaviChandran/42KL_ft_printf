/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravi-ch <dravi-ch@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 17:29:30 by dravi-ch          #+#    #+#             */
/*   Updated: 2023/06/10 20:05:30 by dravi-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len_ptr(uintptr_t n)
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

static void	ft_hex_base(uintptr_t n)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (n >= 16)
	{
		ft_hex_base(n / 16);
		ft_hex_base(n % 16);
	}
	else
		ft_putchar_fd(hex[n], 1);
}

/*Writes pointer address and returns the lenght of the address*/
int	ft_put_ptr(uintptr_t ptr)
{
	int	len;

	len = 0;
	len += write(1, "0x", 2);
	if (ptr == 0)
		len += write (1, "0", 1);
	else
	{
		ft_hex_base(ptr);
		len += ft_len_ptr(ptr);
	}
	return (len);
}
