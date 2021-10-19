# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmontero <jmontero@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/06 13:04:35 by jmontero          #+#    #+#              #
#    Updated: 2021/10/19 13:14:59 by jmontero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

HFILES	= libft.h

SRC		= ft_isalpha.c\
		  ft_isdigit.c\
		  ft_isalnum.c\
		  ft_isascii.c\
		  ft_isprint.c\
		  ft_strlen.c\
		  ft_memset.c\
		  ft_bzero.c\
		  ft_memcpy.c\
		  ft_memmove.c\
		  ft_strlcpy.c\
		  ft_strlcat.c

OBJS	= $(SRC:.c=.o)

CFLAGS	= -Wall -Werror -Wextra

CC		= gcc

all: $(NAME)

$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS): $(SRC) $(HFILES)
	$(CC) $(CFLAGS) -c $(SRC) $(HFILES)

clean:
	rm -rf $(OBJS)

fclean:
	rm -rf $(OBJS) $(NAME) 

re: fclean all

.PHONY: all clean fclean
