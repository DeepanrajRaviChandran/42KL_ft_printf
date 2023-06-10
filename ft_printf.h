/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravi-ch <dravi-ch@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 19:23:05 by dravi-ch          #+#    #+#             */
/*   Updated: 2023/06/10 19:44:24 by dravi-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>

/*Number Specifiers*/
int	ft_put_hex(unsigned int n, const char f_s);
int	ft_put_ptr(uintptr_t ptr);
int	ft_put_unsignednbr(unsigned int n);
int	ft_put_nbr(int n);

/*String Specifiers*/
int	ft_put_char(int c);
int	ft_put_str(char *s);

/*Main*/
int	ft_printf(const char *str, ...);

#endif
