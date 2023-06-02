/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravi-ch <dravi-ch@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 17:29:30 by dravi-ch          #+#    #+#             */
/*   Updated: 2023/06/02 17:51:33 by dravi-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_ptr(unsigned long long ptr)
{
	int	len;

	len = 0;
	len += write(1, "0x", 2);
	len += ft_put_hex(ptr, 'x');
	return (len);
}
