/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravi-ch <dravi-ch@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 13:37:35 by dravi-ch          #+#    #+#             */
/*   Updated: 2023/05/25 19:51:59 by dravi-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dst;
	int		i;
	int		len_s;

	if (!s)
		return (NULL);
	len_s = 0;
	while (s[len_s])
		len_s++;
	dst = (char *)malloc(sizeof(char) * (len_s + 1));
	if (!dst)
		return (NULL);
	i = 0;
	while (i < len_s)
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
/*
#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(const char *s);

int main() {
    char *str = "Hello, world!";
    char *copy = ft_strdup(str);

    if (copy == NULL) {
        printf("Error: could not allocate memory for copy\n");
        return 1;
    }

    printf("Original string: %s\n", str);
    printf("Copied string: %s\n", copy);

    free(copy);

    return 0;
}
*/
