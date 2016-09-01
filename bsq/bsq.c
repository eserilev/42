/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/30 20:13:05 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/30 20:13:07 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		g_row;
int		g_column;
int		g_max;
char	g_open;
char	g_obstacle;
char	g_fill;

char	**fill_map(char **map)
{
	int i;
	int j;

	i = 0;
	while (i < g_max)
	{
		j = 0;
		while (j < g_max)
		{
			map[g_row + i][g_column + j] = g_fill;
			j++;
		}
		i++;
	}
	return (map);
}

int		find_largest_square(char **map, int row, int column, int max)
{
	int x;
	int y;

	x = 0;
	y = 0;
	max++;
	while (y < max)
	{
		x = 0;
		while (x < max)
		{
			if (invalid_location(map, row + y, column + x, g_obstacle))
				return (max - 1);
			x++;
		}
		y++;
	}
	if (g_max < max)
	{
		g_row = row;
		g_column = column;
	}
	return (find_largest_square(map, row, column, max));
}

void	parse_vars(char *vars)
{
	g_open = vars[0];
	g_obstacle = vars[1];
	g_fill = vars[2];
}

char	**bsq(char **map, char *vars)
{
	int row;
	int column;
	int	max;

	row = 0;
	column = 0;
	max = 0;
	parse_vars(vars);
	while (map[row])
	{
		column = 0;
		while (map[row][column] != '\0')
		{
			if (map[row][column] == g_open)
				max = find_largest_square(map, row, column, max);
			g_max = max;
			column++;
		}
		row++;
	}
	map = fill_map(map);
	print_map(map);
	return (map);
}
