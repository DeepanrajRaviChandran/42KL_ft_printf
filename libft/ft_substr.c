/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravi-ch <dravi-ch@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:36:38 by dravi-ch          #+#    #+#             */
/*   Updated: 2023/05/25 18:21:04 by dravi-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*extract_substring(const char *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;

	substring = (char *)malloc(sizeof(char) * (len + 1));
	if (!substring)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substring[i] = s[start + i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len < start)
	{
		dest = (char *)malloc(sizeof(char));
		if (!dest)
			return (NULL);
		dest[0] = '\0';
		return (dest);
	}
	else
	{
		if (start + len > s_len)
			len = s_len - start;
		return (extract_substring(s, start, len));
	}
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
   char* str = "Hello, world!";
   char* sub = ft_substr(str, 7, 5);
   printf("%s\n", sub); // output: "world"
   free(sub);
   return 0;
}
*/
