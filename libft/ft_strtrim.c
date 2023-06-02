/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravi-ch <dravi-ch@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:03:23 by dravi-ch          #+#    #+#             */
/*   Updated: 2023/05/25 19:56:39 by dravi-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_in_set(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*trim;
	unsigned int	start;
	unsigned int	end;
	unsigned int	i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && char_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && char_in_set(s1[end - 1], set))
		end--;
	trim = (char *)malloc(sizeof(char) * (end - start +1));
	if (!trim)
		return (NULL);
	i = 0;
	while (start < end)
		trim [i++] = s1[start++];
	trim[i] = '\0';
	return (trim);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char s1[] = "###+++---Hello, World!---+++###";
    char set[] = "#+-";

    char *trimmed = ft_strtrim(s1, set);
    if (trimmed == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Original string: \"%s\"\n", s1);
    printf("Trimmed string: \"%s\"\n", trimmed);

    free(trimmed);

    return 0;
}
*/
