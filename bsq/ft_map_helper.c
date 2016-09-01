/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_helper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 20:43:14 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/31 20:43:16 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	print_map(char **map)
{
	int i;
	int j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			ft_putchar(map[i][j]);
			j++;
		}
		i++;
	}
}

int		row_size(char **map)
{
	int i;

	i = 0;
	while (map[i])
		i++;
	return (i);
}

int		col_size(char **map)
{
	int i;

	i = 0;
	while (map[0][i] != '\n')
		i++;
	return (i);
}

int		invalid_location(char **map, int row, int column, char o)
{
	if (map[row] == NULL)
		return (1);
	else if (map[row][column] == '\0')
		return (1);
	else if (map[row][column] == '\n')
		return (1);
	else if (map[row][column] == o)
		return (1);
	else
		return (0);
}
