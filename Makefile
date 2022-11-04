# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/29 15:34:36 by jhesso            #+#    #+#              #
#    Updated: 2022/11/04 14:52:03 by jhesso           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRC = ./src/ft_atoi.c ./src/ft_bzero.c ./src/ft_calloc.c ./src/ft_isalnum.c ./src/ft_isalpha.c\
			./src/ft_isascii.c ./src/ft_isdigit.c ./src/ft_isprint.c ./src/ft_memchr.c\
			./src/ft_memcmp.c ./src/ft_memcpy.c ./src/ft_memmove.c ./src/ft_memset.c ./src/ft_strchr.c\
			./src/ft_strdup.c ./src/ft_strlcat.c ./src/ft_strlcpy.c ./src/ft_strlen.c ./src/ft_strncmp.c\
			./src/ft_strnstr.c ./src/ft_strrchr.c ./src/ft_tolower.c ./src/ft_toupper.c ./src/ft_substr.c\
			./src/ft_strjoin.c ./src/ft_putchar_fd.c ./src/ft_putstr_fd.c ./src/ft_putendl_fd.c\
			./src/ft_putnbr_fd.c ./src/ft_itoa.c

OBJ = ./obj/ft_atoi.o ./obj/ft_bzero.o ./obj/calloc.o ./obj/isalnum.o ./obj/isalpha.o\
			./obj/isascii.o ./obj/isdigit.o ./obj/isprint.o ./obj/memchr.o\
			./obj/memcmp.o ./obj/memcpy.o ./obj/memmove.o ./obj/memset.o ./obj/strchr.o\
			./obj/strdup.o ./obj/strlcat.o ./obj/strlcpy.o ./obj/strlen.o ./obj/strncmp.o\
			./obj/strnstr.o ./obj/strrchr.o ./obj/tolower.o ./obj/toupper.o ./obj/substr.o\
			./obj/strjoin.o ./obj/putchar_fd.o ./obj/putstr_fd.o ./obj/putendl_fd.o\
			./obj/putnbr_fd.o ./obj/itoa.o

INCLUDE = libft.h

all: $(NAME)

$(NAME): object lib

object:
	cc $(FLAGS) -c $(SRC)
	mv *.o ./obj/

lib:
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all object lib clean fclean re
