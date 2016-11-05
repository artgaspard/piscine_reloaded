# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agaspard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/04 17:49:17 by agaspard          #+#    #+#              #
#    Updated: 2016/11/05 16:54:05 by agaspard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRC = ft_display_file.c
HEAD = headers.h
FLAG = -Wall -Werror -Wextra
OBJ = ft_display_file.o

all : $(NAME)

$(NAME):
	gcc -c $(FLAG) $(SRC) -I $(HEAD)
	gcc $(OBJ) -o $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean:
	/bin/rm -f $(NAME)

re : fclean all
