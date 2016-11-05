# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agaspard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/04 13:54:37 by agaspard          #+#    #+#              #
#    Updated: 2016/11/05 15:23:51 by agaspard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c	\
	  srcs/ft_putstr.c	\
	  srcs/ft_strcmp.c	\
	  srcs/ft_strlen.c	\
	  srcs/ft_swap.c

ICL = includes/libft.h

FLAG = -Wall -Werror -Wextra

OBJ = ft_putchar.o	\
	   ft_putstr.o	\
	   ft_strcmp.o	\
	   ft_strlen.o	\
	   ft_swap.o

all: $(NAME)

$(NAME) :
	gcc $(FLAG) -c $(SRC) -I $(ICL)
	ar rc $(NAME) $(OBJ)

clean :
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY : clean re fclean all
