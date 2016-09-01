/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 23:03:17 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/11 23:03:20 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_comb2(void)
{
	int		num_array[4];
	int		counter;

	counter = 0;
	while (counter <= 9999)
	{
		num_array[3] = counter % 10;
		num_array[2] = (counter % 100) / 10;
		num_array[1] = (counter % 1000) / 100;
		num_array[0] = (counter % 10000) / 1000;
		counter++;
		if (num_array[0] <= num_array[2] && num_array[1] < num_array[3])
		{
			ft_putchar(num_array[0] + '0');
			ft_putchar(num_array[1] + '0');
			ft_putchar(' ');
			ft_putchar(num_array[2] + '0');
			ft_putchar(num_array[3] + '0');
			if (num_array[0] == 9 && num_array[1] == 8 && num_array[3] == 9)
				ft_putchar(',');
			ft_putchar(' ');
		}
	}
}
