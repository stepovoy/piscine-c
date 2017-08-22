#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: astepovy <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/17 15:32:24 by astepovy          #+#    #+#              #
#    Updated: 2016/09/17 15:32:30 by astepovy         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = eval_expr

SRC += main.c
SRC += ft_functs.c
SRC += eval_expr.c

OBJ  = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(SRC)
	gcc $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
