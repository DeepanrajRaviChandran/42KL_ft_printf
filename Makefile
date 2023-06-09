# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dravi-ch <dravi-ch@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/01 19:24:23 by dravi-ch          #+#    #+#              #
#    Updated: 2023/06/09 12:00:12 by dravi-ch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a

CFLAGS		=	-Wall -Wextra -Werror
RM			=	rm -rf

SRCS		=	ft_put_hex.c ft_put_ptr.c ft_put_unsignednbr.c ft_put_nbr.c\
				ft_put_char.c ft_put_str.c ft_printf.c

OBJ_DIR		=	objects
OBJS		=	$(SRCS:%.c=$(OBJ_DIR)/%.o)

LIBFT_DIR	=	./libft
LIBFT		=	$(LIBFT_DIR)/libft.a

$(OBJ_DIR)/%.o:	%.c
				gcc $(CFLAGS) -c $< -o $@

all:	$(NAME)

$(NAME):	$(LIBFT) $(OBJ_DIR) $(OBJS)
			cp $(LIBFT) $(NAME)
			ar rcs $(NAME) $(OBJS)

$(LIBFT):
			make -C $(LIBFT_DIR) all

$(OBJ_DIR):
			mkdir -p $(OBJ_DIR)

clean:
		make -C $(LIBFT_DIR) clean
		$(RM) $(OBJ_DIR)

fclean:	clean
		make -C $(LIBFT_DIR) fclean
		$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re libft

