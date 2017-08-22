# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dtitenko <dtitenko@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/18 18:16:51 by dtitenko          #+#    #+#              #
#    Updated: 2016/09/18 19:53:25 by dtitenko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = rush-2

SRCDIR = srcs/
RUSHESDIR = $(addprefix $(SRCDIR), rushes/)
HEADERS = includes/
SRC =	count.c \
		ft_add_char.c \
		main.c \
		strings.c
RUSHES =	rush00.c \
			rush01.c \
			rush02.c \
			rush03.c \
			rush04.c \
			rush.c
OBJDIR = obj/

OBJ = $(RUSHES:.c=.o)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -I $(HEADERS) -c $(addprefix $(RUSHESDIR), $(RUSHES))
	mkdir -p $(OBJDIR)
	mv $(OBJ) $(OBJDIR)
	$(CC) $(CFLAGS) $(addprefix $(OBJDIR), $(OBJ)) -I $(HEADERS) $(addprefix $(SRCDIR), $(SRC)) -o $(NAME)

clean:
	rm -rf $(OBJDIR)
	find . -type f -name "*.o" -delete
fclean: clean
	rm -f $(NAME)

re: fclean all
