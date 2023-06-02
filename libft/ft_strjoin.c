/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravi-ch <dravi-ch@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 19:27:40 by dravi-ch          #+#    #+#             */
/*   Updated: 2023/05/25 19:55:14 by dravi-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	size;
	char			*fin_str;

	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	fin_str = (char *)malloc(sizeof(char) * (size + 1));
	if (!fin_str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		fin_str[j++] = s1[i++];
	i = 0;
	while (s2[i])
		fin_str[j++] = s2[i++];
	fin_str[j] = '\0';
	return (fin_str);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *str1 = "Hello, ";
    char *str2 = "world!";
    char *result = ft_strjoin(str1, str2);

    if (result == NULL)
    {
        printf("Error: memory allocation failed\n");
        return EXIT_FAILURE;
    }

    printf("%s\n", result);

    free(result);
    return EXIT_SUCCESS;
}
*/
