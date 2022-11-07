# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/29 15:34:36 by jhesso            #+#    #+#              #
#    Updated: 2022/11/07 21:59:53 by jhesso           ###   ########.fr        #
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

OBJ = ./obj/ft_atoi.o ./obj/ft_bzero.o ./obj/ft_calloc.o ./obj/ft_isalnum.o ./obj/ft_isalpha.o\
			./obj/ft_isascii.o ./obj/ft_isdigit.o ./obj/ft_isprint.o ./obj/ft_memchr.o\
			./obj/ft_memcmp.o ./obj/ft_memcpy.o ./obj/ft_memmove.o ./obj/ft_memset.o ./obj/ft_strchr.o\
			./obj/ft_strdup.o ./obj/ft_strlcat.o ./obj/ft_strlcpy.o ./obj/ft_strlen.o ./obj/ft_strncmp.o\
			./obj/ft_strnstr.o ./obj/ft_strrchr.o ./obj/ft_tolower.o ./obj/ft_toupper.o ./obj/ft_substr.o\
			./obj/ft_strjoin.o ./obj/ft_putchar_fd.o ./obj/ft_putstr_fd.o ./obj/ft_putendl_fd.o\
			./obj/ft_putnbr_fd.o ./obj/ft_itoa.o

INCLUDE = libft.h

all: $(NAME)

$(NAME): object lib

object:
	cc $(FLAGS) -c $(SRC) -include ~/work/libft/includes/libft.h
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