/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 17:19:44 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/14 17:19:46 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print_symbols(int count_x, int x, int count_y, int y)
{
	if (count_y == 1)
	{
		if (count_x == 1)
			ft_putchar('/');
		else if (count_x == x)
			ft_putchar('\\');
		else
			ft_putchar('*');
	}
	else if (count_y == y)
	{
		if (count_x == 1)
			ft_putchar('\\');
		else if (count_x == x)
			ft_putchar('/');
		else
			ft_putchar('*');
	}
	else
	{
		if (count_x == 1 || count_x == x)
			ft_putchar('*');
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int count_x;
	int count_y;

	count_x = 0;
	count_y = 0;
	while (count_y < y)
	{
		count_y++;
		count_x = 0;
		while (count_x < x)
		{
			count_x++;
			print_symbols(count_x, x, count_y, y);
		}
		ft_putchar('\n');
	}
}