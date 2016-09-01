/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 23:04:18 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/21 23:04:19 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_play_sudoku(int **puzzle, int row, int col);
int	ft_print_puzzle(int **puzzle);
int	ft_putchar(char c);

int	ft_is_valid(int **puzzle, int row, int col, int num)
{
	int row_sector;
	int col_sector;
	int i;
	int j;

	row_sector = (row / 3) * 3;
	col_sector = (col / 3) * 3;
	i = 0;
	while (i < 9)
	{
		if (puzzle[row][i] == num)
			return (0);
		if (puzzle[i][col] == num)
			return (0);
		if (puzzle[row_sector + (i % 3)][col_sector + (i / 3)] == num)
			return (0);
		i++;
	}
	return (1);
}

int	ft_print_puzzle(int **puzzle)
{
	int i;
	int j;
	char c;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			c = puzzle[i][j] + '0';
			ft_putchar(c);
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}

int	ft_skip(int **puzzle, int row, int col)
{
	if ((col + 1) < 9)
		return (ft_play_sudoku(puzzle, row, col + 1));
	else if ((row + 1) < 9)
		return (ft_play_sudoku(puzzle, row + 1, 0));
	else
		return (1);
}

int	ft_set_values(int **puzzle, int row, int col, int i)
{
	while (i < 9)
	{
		if (ft_is_valid(puzzle, row, col, i + 1))
		{
			puzzle[row][col] = i + 1;
			if ((col + 1) < 9)
			{
				if (ft_play_sudoku(puzzle, row, col + 1))
					return (1);
				else
					puzzle[row][col] = 0;
			}
			else if ((row + 1) < 9)
			{
				if (ft_play_sudoku(puzzle, row + 1, 0))
					return (1);
				else
					puzzle[row][col] = 0;
			}
		}
		i++;
	}
	return (0);
}

int	ft_play_sudoku(int **puzzle, int row, int col)
{
	int i;

	i = 0;
	if (row >= 9 || col >= 9)
		return (1);
	if (puzzle[row][col] != 0 && ft_skip(puzzle, row, col))
		return (1);
	if (ft_set_values(puzzle, row, col, i))
		return (1);
	printf("TEST");
	return (0);
}
