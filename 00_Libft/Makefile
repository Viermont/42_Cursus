# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmontero <jmontero@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/06 13:04:35 by jmontero          #+#    #+#              #
#    Updated: 2023/11/29 17:08:48 by jmontero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRC		= ft_isalpha.c \
		  ft_isdigit.c \
		  ft_isalnum.c \
		  ft_isascii.c \
		  ft_isprint.c \
		  ft_strlen.c \
		  ft_memset.c \
		  ft_bzero.c \
		  ft_memcpy.c \
		  ft_memmove.c \
		  ft_strlcpy.c \
		  ft_strlcat.c \
		  ft_toupper.c \
		  ft_tolower.c \
		  ft_strchr.c \
		  ft_strrchr.c \
		  ft_strncmp.c \
		  ft_memchr.c \
		  ft_memcmp.c \
		  ft_strnstr.c \
		  ft_atoi.c \
		  ft_calloc.c \
		  ft_strdup.c \
		  ft_substr.c \
		  ft_strjoin.c \
		  ft_strtrim.c \
		  ft_itoa.c \
		  ft_strmapi.c \
		  ft_striteri.c \
		  ft_putchar_fd.c \
		  ft_putstr_fd.c \
		  ft_putendl_fd.c \
		  ft_putnbr_fd.c \
		  ft_split.c

SRC_BON	= ft_lstnew.c

OBJ		= $(SRC:.c=.o)

OBJ_BON	= $(SRC_BON:.c=.o)

CFLAGS	= -Wall -Werror -Wextra

CC		= gcc

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

all: $(NAME)

bonus: $(OBJ_BON)
	ar rcs $(NAME) $(OBJ_BON)

clean:
	rm -rf $(OBJ) $(OBJ_BON)

fclean:
	rm -rf $(OBJ) $(NAME) 

re: fclean all

.PHONY: all bonus clean fclean
