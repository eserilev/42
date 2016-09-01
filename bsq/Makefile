# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aquint <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/31 13:57:57 by aquint            #+#    #+#              #
#    Updated: 2016/08/31 21:35:13 by aquint           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq 

SRC = ft_linked_list.c checkvalid.c bsq.c ft_atoi.c ft_list_helper.c ft_map_helper.c main.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror $(SRC) -I. -o $(NAME)
	
clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean re all fclean 
