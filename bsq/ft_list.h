/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 15:44:57 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/31 19:36:38 by aquint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stdlib.h>
# include <unistd.h>
# include <sys/stat.h>
# include <fcntl.h>

typedef struct		s_list
{
	struct s_list	*next;
	char			data;
}					t_list;
t_list				*ft_create_elem(char data);
void				ft_list_push_back(t_list **begin_list, char data);
char				**ft_concat_string(t_list *list);
int					ft_valid_input(char *str);
int					ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_putnbr(int nb);
int					ft_atoi(char *str);
int					ft_rush_check(char *str, int row, int column);
int					ft_count_column(t_list *list);
int					ft_count_row(t_list *list);
int					checkvalid(t_list *list);
char				**bsq(char **map, char *vars);
void				print_map(char **map);
char				*vari(t_list *input);
int					row_size(char **map);
int					col_size(char **map);
int					invalid_location(char **map, int row, int column, char o);
#endif
