/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 15:44:57 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/28 17:50:28 by lgaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stdlib.h>
# include <unistd.h>

typedef struct		s_list
{
	struct s_list	*next;
	char			data;
}					t_list;
t_list				*ft_create_elem(char data);
void				ft_list_push_back(t_list **begin_list, char data);
char				*ft_concat_string(t_list *list, int length);
int					ft_valid_input(char *str);
int					ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_putnbr(int nb);
int					ft_rush_check(char *str, int row, int column);
#endif
