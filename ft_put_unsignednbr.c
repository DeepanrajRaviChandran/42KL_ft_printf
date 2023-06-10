/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsignednbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravi-ch <dravi-ch@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 18:57:04 by dravi-ch          #+#    #+#             */
/*   Updated: 2023/06/10 22:47:11 by dravi-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_nbr_len(unsigned int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	ft_unsignednbr(unsigned int n)
{
	if (n >= 10)
	{
		ft_put_unsignednbr(n / 10);
		ft_put_unsignednbr(n % 10);
	}
	else
		ft_putchar_fd(n + '0', 1);
}

/*Writes the unsigned number and return the length of the number*/
int	ft_put_unsignednbr(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
	{
		len += write (1, "0", 1);
	}
	else
	{
		ft_unsignednbr(n);
		len += ft_nbr_len(n);
	}
	return (len);
}
