/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravi-ch <dravi-ch@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 13:03:42 by dravi-ch          #+#    #+#             */
/*   Updated: 2023/06/14 13:46:47 by dravi-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*Used for d and i format specifier and returns the len of number*/
int	ft_put_nbr(int n)
{
	int		len;
	char	*num;

	if (n == -2147483648)
	{
		write (1, "-2147483648", 11);
		return (11);
	}
	num = ft_itoa(n);
	len = ft_put_str(num);
	free (num);
	return (len);
}
