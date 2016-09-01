/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 00:19:05 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/21 00:19:06 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int ft_play_sudoku(int **puzzle, int row, int col);
int	ft_is_valid(int **puzzle, int row, int col, int num);
int	ft_print_puzzle(int **puzzle);

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int	ft_print_error(void)
{
	ft_putchar('E');
	ft_putchar('r');
	ft_putchar('r');
	ft_putchar('o');
	ft_putchar('r');
	ft_putchar('\n');
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

	if(argc != 10)
		return (0);
	i = 1;
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
		if (ft_play_sudoku(puzzle, 0, 0) == 0)
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
