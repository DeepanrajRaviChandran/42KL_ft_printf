/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravi-ch <dravi-ch@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 18:38:26 by dravi-ch          #+#    #+#             */
/*   Updated: 2023/05/25 16:19:56 by dravi-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	i;
	size_t	total;

	if (count > 0 && size > 0 && SIZE_MAX / count < size)
		return (NULL);
	total = count * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < total)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int* arr = (int*)ft_calloc(10, sizeof(int));
    if (arr != NULL) {
        printf("Array elements after calloc:\n");
        for (int i = 0; i < 10; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        free(arr);
    } else {
        printf("Allocation failed.\n");
    }
    return 0;
}
*/
