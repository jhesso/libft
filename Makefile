# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/29 15:34:36 by jhesso            #+#    #+#              #
#    Updated: 2022/10/29 16:00:35 by jhesso           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRC = ./ft_atoi.c ./ft_bzero.c ./ft_calloc.c ./ft_isalnum.c ./ft_isalpha.c\
			./ft_isascii.c ./ft_isdigit.c ./ft_isprint.c ./ft_memchr.c\
			./ft_memcmp.c ./ft_memcpy.c ./ft_memmove.c ./ft_memset.c ./ft_strchr.c\
			./ft_strdup.c ./ft_strlcat.c ./ft_strlcpy.c ./ft_strlen.c ./ft_strncmp.c\
			./ft_strnstr.c ./ft_strrchr.c ./ft_tolower.c ./ft_toupper.c

OBJ = ./ft_atoi.o ./ft_bzero.o ft_calloc.o ft_isalnum.o ft_isalpha.o\
			ft_isascii.o ft_isdigit.o ft_isprint.o ft_memchr.o\
			ft_memcmp.o ft_memcpy.o ft_memmove.o ft_memset.o ft_strchr.o\
			ft_strdup.o ft_strlcat.o ft_strlcpy.o ft_strlen.o ft_strncmp.o\
			ft_strnstr.o ft_strrchr.o ft_tolower.o ft_toupper.o

INCLUDE = libft.h

all: $(NAME)

$(NAME): object lib

object:
	cc $(FLAGS) -c $(SRC)

lib:
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all object lib clean fclean re