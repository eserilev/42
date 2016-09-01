/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/28 16:34:18 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/28 18:44:38 by mhorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_print_rush(int row, int column, int rush)
{
	ft_putstr("[rush-0");
	ft_putnbr(rush);
	ft_putstr("] [");
	ft_putnbr(column);
	ft_putstr("] [");
	ft_putnbr(row);
	ft_putstr("]");
	return (1);
}

int	ft_print_multiple(int row, int column, int rush)
{
	if (rush == 9)
	{
		ft_print_rush(row, column, 2);
		ft_putstr(" || ");
		ft_print_rush(row, column, 3);
		ft_putstr(" || ");
		ft_print_rush(row, column, 4);
		return (1);
	}
	if (rush == 7)
	{
		ft_print_rush(row, column, 3);
		ft_putstr(" || ");
		ft_print_rush(row, column, 4);
		return (1);
	}
	if (rush == 6)
	{
		ft_print_rush(row, column, 2);
		ft_putstr(" || ");
		ft_print_rush(row, column, 4);
		return (1);
	}
	return (0);
}

int	ft_check_base_case(char *str, int row, int column)
{
	if (str[0] == 'o')
		return (ft_print_rush(row, column, 0));
	if (str[0] == '/')
		return (ft_print_rush(row, column, 1));
	if (column == 1 && row == 1)
		return (ft_print_multiple(row, column, 9));
	if (column > 1 && row == 1)
		return (ft_print_multiple(row, column, 7));
	if (column == 1 && row > 1)
		return (ft_print_multiple(row, column, 6));
	return (0);
}

int	ft_rush_check(char *str, int row, int column)
{
	int i;
	int length;

	i = 0;
	if (ft_check_base_case(str, row, column))
		return (1);
	length = row * column;
	if (str[column - 1] == 'A')
	{
		ft_print_rush(row, column, 2);
		return (1);
	}
	if (str[column - 1] == 'C' && str[row + length - 2] == 'C')
	{
		ft_print_rush(row, column, 3);
		return (1);
	}
	if (str[column - 1] == 'C' && str[row + length - 2] == 'A')
	{
		ft_print_rush(row, column, 4);
		return (1);
	}
	return (0);
}
