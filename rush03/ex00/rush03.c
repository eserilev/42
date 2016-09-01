/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 12:39:36 by mhorn             #+#    #+#             */
/*   Updated: 2016/08/27 20:59:41 by mhorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

/*
** x is the total column number
** y is the total row number
** j counts down the columns
** i counts down the rows
*/

void	corners(int col)
{
	if (col == 1)
		put_letter('A');
	else
		put_letter('C');
}

void	edges(void)
{
	put_letter('B');
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
			corners(col);
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
