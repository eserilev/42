# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgaetano <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/27 19:11:02 by lgaetano          #+#    #+#              #
#    Updated: 2016/08/28 18:20:51 by mhorn            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
 
NAME	= rush-2
CC		= gcc
CFLAGS	= -Wall -Werror -Wextra -I "rush.h"
MFLAGS = -Wall -Werror -Wextra -I "ft_list.h"
MAIN_FILES	= ft_linked_list.c ft_print.c ft_rush_check.c main.c
RUSH_FILES	= rush00.c rush01.c rush02.c rush03.c rush04.c 
HELP_FILES	= rush_main.c put_letter.c convert_int.c
CFLAGS	= -Wall -Werror -Wextra

OBJS	= $(addprefix build/, $(RUSH_FILES:.c=.o))
OBJ2	= $(RUSH_FILES:.c=)
HELPERS	= $(HELP_FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ2)
	$(CC) $(MFLAGS) -o $(NAME) $(MAIN_FILES)

build/%.o: ./%.c | build
	$(CC) $(CFLAGS) -o $@ -c $^
	
$(OBJ2): $(OBJS) $(HELPERS)
	$(CC) $(CFLAGS) -o $@ build/$@.o $(HELPERS)

$(HELPERS): $(HELP_FILES)
	$(CC) $(CFLAGS) -c $^

build: 
	mkdir build

helper:
	mkdir helper

clean:
	rm -rf build/
	rm -f rush_main.o put_letter.o convert_int.o

fclean: clean
	rm -f $(NAME) $(OBJ2)

re: fclean all
