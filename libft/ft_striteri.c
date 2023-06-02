/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravi-ch <dravi-ch@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 15:13:04 by dravi-ch          #+#    #+#             */
/*   Updated: 2023/05/18 16:08:45 by dravi-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>

void print_char_with_index(unsigned int index, char* character)
{
    printf("Character at index %u: %c\n", index, *character);
    // Example: Add 1 to the ASCII value of the character
    *character += 1;
}

int main()
{
    char str[] = "Hello";
    ft_striteri(str, print_char_with_index);

    printf("Modified string: %s\n", str);

    return 0;
}
*/
