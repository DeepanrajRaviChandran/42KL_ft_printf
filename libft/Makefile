# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dravi-ch <dravi-ch@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/23 00:23:00 by dravi-ch          #+#    #+#              #
#    Updated: 2023/06/06 18:14:15 by dravi-ch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCE			=	ft_itoa.c ft_tolower.c ft_calloc.c ft_strrchr.c ft_toupper.c ft_strnstr.c ft_strjoin.c \
					ft_putchar_fd.c ft_strlcat.c ft_isalnum.c ft_striteri.c ft_strlen.c ft_memcmp.c ft_isprint.c \
					ft_strlcpy.c ft_putendl_fd.c ft_strncmp.c ft_substr.c ft_memmove.c ft_strchr.c ft_isalpha.c \
					ft_putstr_fd.c ft_memcpy.c ft_memset.c ft_putnbr_fd.c ft_isdigit.c ft_strtrim.c ft_strmapi.c \
					ft_memchr.c ft_split.c ft_isascii.c ft_strdup.c ft_bzero.c ft_atoi.c

OBJECTS			=	$(SOURCE:.c=.o)

BONUS			=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c\
					ft_lstclear.c ft_lstiter.c ft_lstmap.c

BONUS_OBJECTS	=	$(BONUS:.c=.o)

NAME			=	libft.a

CFLAGS			=	-Wall -Wextra -Werror
RM				=	rm -f

.c.o	:
			gcc $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME)	:	$(OBJECTS)
			ar rcs $(NAME) $(OBJECTS)

all		:	$(NAME)

clean	:
			$(RM) $(OBJECTS) $(BONUS_OBJECTS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all

bonus	:	$(BONUS_OBJECTS) $(NAME)
			ar rcs $(NAME) $(BONUS_OBJECTS)

.PHONY	:	all clean fclean re bonus
