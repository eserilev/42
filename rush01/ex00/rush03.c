/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 17:20:28 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/13 17:20:30 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print_letters(int count_x, int x, int count_y, int y)
{
	if (count_y == 1 || count_y == y)
	{
		if (x == 1)
			ft_putchar('A');
		else if (count_x == x)
			ft_putchar('C');
		else if (count_x == 1)
			ft_putchar('A');
		else
			ft_putchar('B');
	}
	else
	{
		if (count_x == 1 || count_x == x)
			ft_putchar('B');
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
			print_letters(count_x, x, count_y, y);
		}
		ft_putchar('\n');
	}
}
