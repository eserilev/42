/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 21:13:29 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/21 21:13:30 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int ft_play_sudoku(int **puzzle, int row, int col);

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
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

int	ft_skip_number(int **puzzle, int row, int col)
{
	if ((col + 1) < 9)
		return (ft_play_sudoku(puzzle, row, col + 1));
	else if ((row + 1) < 9)
		return (ft_play_sudoku(puzzle, row + 1, 0));
	else
		return (1);
}

int	ft_set_number(int **puzzle, int row, int col)
{
	int i;

	i = 0;
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
			else
				return (1);
		}
		i++;
	}
	return (0);
}

int	ft_next_space(int **puzzle, int row, int col)
{
	if ((col + 1) < 9)
		return (ft_play_sudoku(puzzle, row, col + 1));
	else if ((row + 1) < 9)
		return (ft_play_sudoku(puzzle, row, col + 1));
	else
		return (1);
}

int	ft_play_sudoku(int **puzzle, int row, int col)
{
	int i;

	i = 0;
	if (row >= 9 || col >= 9)
		return (1);
	if (puzzle[row][col] != 0 && ft_next_space(puzzle, row, col))
		return (1);
	if (ft_set_number(puzzle, row, col))
		return (1);
	else
		return (0);
}

int	**ft_build_puzzle(int argc, char **argv)
{
	int i;
	int j;
	int **puzzle;

	i = 1;
	puzzle = (int**)malloc(sizeof(int*) * (argc - 1));
	while (i < 10)
	{
		puzzle[i - 1] = (int*)malloc(sizeof(int) * (9));
		j = 0;
		while (j < 9)
		{
			if (argv[i][j] != '.' && (argv[i][j] >= '0' && argv[i][j] <= '9'))
				puzzle[i - 1][j] = argv[i][j] - '0';
			else if (argv[i][j] == '.')
				puzzle[i - 1][j] = 0;
			else
				return (0);
			j++;
		}
		i++;
	}
	return (puzzle);
}

int	ft_check_argument(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	if (argc != 10)
		return (0);
	while (argv[i] != '\0')
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (j > 8)
				return (0);
			j++;
		}
		if (j < 9)
			return (0);
		i++;
	}
	return (1);
}

int	ft_print_error()
{
	ft_putstr("Error");
	ft_putchar('\n');
	return (0);
}

int	main(int argc, char **argv)
{
	int **puzzle;

	if (!ft_check_argument(argc, argv))
	{
		ft_print_error();
		return (0);
	}
	puzzle = ft_build_puzzle(argc, argv);
	if (puzzle != NULL)
	{
		if (!ft_play_sudoku(puzzle, 0, 0))
		{
			ft_print_error();
			return (0);
		}
		else
			ft_print_puzzle(puzzle);
	}
	else
		ft_print_error();
	return (1);
}
