/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravi-ch <dravi-ch@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:47:24 by dravi-ch          #+#    #+#             */
/*   Updated: 2023/05/19 14:07:10 by dravi-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
		ft_putnbr_fd(n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
	{
		ft_putchar_fd(n + 48, fd);
	}
}
/*
int main(void)
{
    int fd = STDOUT_FILENO;  // Output to stdout (console)

    int num1 = 12345;
    int num2 = -9876;
    int num3 = 0;
    int num4 = -2147483648;

    ft_putnbr_fd(num1, fd);
    write(fd, "\n", 1);

    ft_putnbr_fd(num2, fd);
    write(fd, "\n", 1);

    ft_putnbr_fd(num3, fd);
    write(fd, "\n", 1);

    ft_putnbr_fd(num4, fd);
    write(fd, "\n", 1);

    return 0;
}
*/
