/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsignednbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravi-ch <dravi-ch@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 18:57:04 by dravi-ch          #+#    #+#             */
/*   Updated: 2023/06/02 19:23:05 by dravi-ch         ###   ########.fr       */
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

int	ft_put_unsignednbr(unsigned int n)
{
	if (n >= 10)
	{
		ft_put_unsignednbr(n / 10);
		ft_put_unsignednbr(n % 10);
	}
	else
		ft_putchar_fd(n + '0', 1);
	return (ft_nbr_len(n));
}
