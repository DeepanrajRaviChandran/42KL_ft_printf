/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravi-ch <dravi-ch@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:25:43 by dravi-ch          #+#    #+#             */
/*   Updated: 2023/05/18 17:53:37 by dravi-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	ssize_t	wrt;

	if (fd < 0)
		return ;
	wrt = write (fd, &c, 1);
	if (wrt == -1)
		return ;
}
/*
#include <fcntl.h>
#include <unistd.h>

int main() {
    int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

    ft_putchar_fd('A', fd);

    close(fd);
    return 0;
}
*/
