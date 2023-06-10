/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravi-ch <dravi-ch@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 13:03:42 by dravi-ch          #+#    #+#             */
/*   Updated: 2023/06/10 22:14:43 by dravi-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*Used for d and i format specifier and returns the len of number*/
int	ft_put_nbr(int n)
{
	int		len;
	char	*num;

	num = ft_itoa(n);
	len = ft_put_str(num);
	free (num);
	return (len);
}
