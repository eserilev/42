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

NAME = ft_advanced_do-op
FLAGS = -Wall -Wextra -Werror
FILES = ft_atoi.c ft_op.c ft_putchar.c ft_putnbr.c ft_putstr.c
OBJS = $(FILES:.c=.o)
SRCS = $(patsubst %, srcs/%, $(FILES))

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRCS)
	gcc $(FLAGS) -o $(NAME) main.c $(SRCS)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all




