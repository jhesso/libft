# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/29 15:56:27 by jhesso            #+#    #+#              #
#    Updated: 2022/10/29 16:00:20 by jhesso           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRC = ../ft_atoi.c ../ft_bzero.c ../ft_calloc.c ../ft_isalnum.c ../ft_isalpha.c\
			../ft_isascii.c ../ft_isdigit.c ../ft_isprint.c ../ft_memchr.c\
			../ft_memcmp.c ../ft_memcpy.c ../ft_memmove.c ../ft_memset.c ../ft_strchr.c\
			../ft_strdup.c ../ft_strlcat.c ../ft_strlcpy.c ../ft_strlen.c ../ft_strncmp.c\
			../ft_strnstr.c ../ft_strrchr.c ../ft_tolower.c ../ft_toupper.c

all: $(NAME)

$(NAME):
	cc $(FLAGS) -c ft_atoi_test.c

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all object lib clean fclean re