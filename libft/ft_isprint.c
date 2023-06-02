/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravi-ch <dravi-ch@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:33:32 by dravi-ch          #+#    #+#             */
/*   Updated: 2023/05/03 14:49:07 by dravi-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	ch;

	ch = '@';

	if (ft_isprint(ch))
	{
		printf("%c is a printable character\n", ch);
		return (0);
	}
	printf("%c is not a printable character\n", ch);

	return (0);
}
*/
