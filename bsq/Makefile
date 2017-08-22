#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alevitan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/20 09:21:27 by alevitan          #+#    #+#              #
#    Updated: 2016/09/21 15:06:04 by alevitan         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = bsq

SRC = srcs/main.c srcs/functions.c srcs/functions2.c srcs/ft_start.c \
	  srcs/ft_check_instructions.c srcs/ft_board.c srcs/ft_optimisations.c

all: $(NAME)

$(NAME):
		gcc -Wall -Wextra -Werror -O3 -o $(NAME) $(SRC)
clean:
		/bin/rm -f
fclean: clean
		/bin/rm -f $(NAME)
re: fclean all
