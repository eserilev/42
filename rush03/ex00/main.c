/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/28 13:51:08 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/28 13:51:10 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

char	*ft_read_stdin(void)
{
	char	buff;
	int		i;
	t_list	*list;

	i = 0;
	list = NULL;
	while ((read(0, &buff, 1)) > 0)
	{
		ft_list_push_back(&list, buff);
		i++;
	}
	return (ft_concat_string(list, i));
	free(list);
}

int		ft_count_row(char *str)
{
	int i;
	int row;

	i = 0;
	row = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			row++;
		i++;
	}
	return (row);
}

int		ft_count_column(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n')
	{
		if (str[i] == '\0')
			return (0);
		i++;
	}
	return (i);
}

int		ft_valid_input(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] != 'A' && str[i] != 'B' && str[i] != 'C')
		{
			if (str[i] != '/' && str[i] != '*' && str[i] != '\\')
			{
				if (str[i] != 'o' && str[i] != '-' && str[i] != '|')
				{
					if (str[i] != '\n' && str[i] != ' ')
						return (0);
				}
			}
		}
		i++;
	}
	return ((ft_count_row(str) != 0) && (ft_count_column(str) != 0));
}

int		main(void)
{
	char	*str;
	int		row;
	int		column;

	str = ft_read_stdin();
	row = 0;
	column = 0;
	if (str == 0 || ft_valid_input(str) == 0)
	{
		ft_putstr("aucune");
		ft_putchar('\n');
		return (0);
	}
	row = ft_count_row(str);
	column = ft_count_column(str);
	if (ft_rush_check(str, row, column))
		ft_putchar('\n');
}
