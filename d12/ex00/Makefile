# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/23 13:42:43 by eseri-le          #+#    #+#              #
#    Updated: 2016/08/23 13:42:45 by eseri-le         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
FLAGS = -c -Wall -Wextra -Werror
FILES = main.c
OBJS = $(FILES:.c=.o)
SRCS = $(FILES)

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRCS) -o $(NAME) 

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all




