/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 12:39:36 by mhorn             #+#    #+#             */
/*   Updated: 2016/08/27 20:59:11 by mhorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	corners(int col, int row, int last_col, int last_row)
{
	if (col == 1 && row == 1)
		put_letter('/');
	else if (col == last_col && row == 1)
		put_letter('\\');
	else if (col == 1 && row == last_row)
		put_letter('\\');
	else
		put_letter('/');
}

void	edges(void)
{
	put_letter('*');
}

void	middle(void)
{
	put_letter(' ');
}

void	print_row(int last_col, int last_row, int row)
{
	int		col;

	col = 1;
	while (col <= last_col)
	{
		if ((row == 1 || row == last_row) && (col == 1 || col == last_col))
		{
			corners(col, row, last_col, last_row);
		}
		else if ((row == 1 || row == last_row) || (col == 1 || col == last_col))
			edges();
		else
			middle();
		col++;
	}
}

void	rush(int x, int y)
{
	int		row;
	int		last_col;
	int		last_row;

	row = 1;
	last_col = x;
	last_row = y;
	while (row <= last_row && last_col > 0 && last_row > 0)
	{
		print_row(last_col, last_row, row);
		put_letter('\n');
		row++;
	}
}
