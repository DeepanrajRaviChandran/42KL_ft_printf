/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravi-ch <dravi-ch@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:21:49 by dravi-ch          #+#    #+#             */
/*   Updated: 2023/05/18 18:39:00 by dravi-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	ssize_t			wrt;
	unsigned int	len;

	if (!s || fd < 0)
		return ;
	len = 0;
	while (s[len])
		len++;
	wrt = write (fd, s, len);
	if (wrt == -1)
		return ;
}
/*
#include <stdio.h>

void ft_putstr_fd(char *s, int fd);

int main(void) {
    int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

    char *message = "Hello, world!";
    ft_putstr_fd(message, fd);

    close(fd);

    printf("Data written to file.\n");

    return 0;
}
*/
