/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravi-ch <dravi-ch@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 09:20:57 by dravi-ch          #+#    #+#             */
/*   Updated: 2023/05/10 13:25:31 by dravi-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;
	size_t	i;

	ptr = s;
	if (s == NULL)
		return ;
	if (n == 0)
		return ;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>
int main() {
    int array[5] = {1, 2, 3, 4, 5};

    // Set the first 3 elements of the array to zero
    ft_bzero(array, 3 * sizeof(int));

    // Print the array to verify it has been zeroed
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
*/
