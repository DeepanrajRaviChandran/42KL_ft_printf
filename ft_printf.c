/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravi-ch <dravi-ch@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 14:55:02 by dravi-ch          #+#    #+#             */
/*   Updated: 2023/06/09 12:04:30 by dravi-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list args, const char f_s)
{
	int	len;

	len = 0;
	if (f_s == 'c')
		len += ft_put_char(va_arg(args, int));
	else if (f_s == 's')
		len += ft_put_str(va_arg(args, char *));
	else if (f_s == '%')
		len += ft_put_char('%');
	else if (f_s == 'p')
		len += ft_put_ptr(va_arg(args, uintptr_t));
	else if (f_s == 'd' || f_s == 'i')
		len += ft_put_nbr(va_arg(args, int));
	else if (f_s == 'u')
		len += ft_put_unsignednbr(va_arg(args, unsigned int));
	else if (f_s == 'x' || f_s == 'X')
		len += ft_put_hex(va_arg(args, unsigned int), f_s);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	va_start(args, str);
	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%')
			len += ft_format(args, str[i + 1]);
		else
			len += ft_put_char(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}
