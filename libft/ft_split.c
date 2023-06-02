/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravi-ch <dravi-ch@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:40:44 by dravi-ch          #+#    #+#             */
/*   Updated: 2023/05/25 17:16:47 by dravi-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_substring(char const *s, char delimiter)
{
	int	i;
	int	substring;
	int	chars;

	substring = 0;
	chars = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != delimiter)
			chars++;
		else
		{
			if (chars > 0)
				substring++;
			chars = 0;
		}
		i++;
	}
	if (chars > 0)
		substring++;
	return (substring);
}

static int	free_mem(char **str, int x)
{
	while (--x >= 0)
		free(str[x]);
	free(str);
	return (0);
}

static int	set_mem_alloc(char **str, int x, int chars)
{
	str[x] = malloc((chars + 1) * sizeof(char));
	if (str[x] == NULL)
		return (free_mem(str, x));
	return (1);
}

static char	**initialize_mem(char const *s, char delimiter)
{
	int		chars;
	int		x;
	char	**str;

	str = ft_calloc((count_substring(s, delimiter) + 1), sizeof(char *));
	if (str == NULL)
		return (str);
	chars = 0;
	x = 0;
	while (*s != '\0')
	{
		if (*s++ != delimiter)
			chars++;
		else
		{
			if (chars > 0)
				if (!set_mem_alloc(str, x++, chars))
					return (NULL);
			chars = 0;
		}
	}
	if (chars > 0)
		if (!set_mem_alloc(str, x++, chars))
			return (NULL);
	return (str);
}

char	**ft_split(char const *s, char delimiter)
{
	char	**str;
	int		i;
	int		x;
	int		cpy_start;

	if (s == NULL || s[0] == '\0')
		return (ft_calloc(1, sizeof(char *)));
	str = initialize_mem(s, delimiter);
	if (str == NULL)
		return (NULL);
	i = -1;
	x = 0;
	cpy_start = 0;
	while (s[++i] != '\0')
	{
		if (s[i] == delimiter)
		{
			if ((i - cpy_start) > 0)
				ft_strlcpy(str[x++], &s[cpy_start], (i - cpy_start) + 1);
			cpy_start = i + 1;
		}
	}
	if ((i - cpy_start) > 0)
		ft_strlcpy(str[x], &s[cpy_start], (i - cpy_start) + 1);
	return (str);
}
