/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_helper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 20:55:29 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/31 20:55:30 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_count_row(t_list *list)
{
	int		i;
	t_list	*begin_list;

	i = 0;
	begin_list = list;
	while (list)
	{
		if (list->data == '\n')
			i++;
		list = list->next;
	}
	list = begin_list;
	return (i);
}

t_list	*skip_header(t_list *list)
{
	while (list->data != '\n')
		list = list->next;
	return (list);
}

int		ft_count_column(t_list *list)
{
	int		i;

	i = 0;
	while (list->data != '\n')
		list = list->next;
	list = list->next;
	while (list->data != '\n')
	{
		i++;
		list = list->next;
	}
	return (i);
}

char	**ft_concat_string(t_list *list)
{
	int		i;
	int		j;
	char	**str;
	int		row;
	int		column;

	i = 0;
	row = ft_count_row(list);
	column = ft_count_column(list);
	list = skip_header(list);
	str = malloc(sizeof(*str) * (row + 1));
	list = list->next;
	while (i < row + 1 && list)
	{
		j = 0;
		str[i] = malloc(sizeof(str) * (column + 1));
		while (j < column + 1 && list)
		{
			str[i][j++] = list->data;
			list = list->next;
		}
		i++;
	}
	str[i] = NULL;
	return (str);
}
