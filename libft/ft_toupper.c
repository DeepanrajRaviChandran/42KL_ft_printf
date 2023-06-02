/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravi-ch <dravi-ch@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:26:51 by dravi-ch          #+#    #+#             */
/*   Updated: 2023/05/10 13:56:12 by dravi-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>

int main() {
    char c = 'a';
    printf("Original character: %c\n", c);

    c = toupper(c);
    printf("Uppercase character: %c\n", c);

    return 0;
}
*/
