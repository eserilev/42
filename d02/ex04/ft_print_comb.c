/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 17:39:39 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/11 17:39:41 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_comb(void)
{
	int		counter;
	int		num_array[3];
	char	*space;

	space = ", ";
	counter = 0;
	while (counter < 999)
	{
		num_array[2] = counter % 10;
		num_array[1] = (counter % 100) / 10;
		num_array[0] = (counter % 1000) / 100;
		counter++;
		if (num_array[1] > num_array[2] || num_array[0] > num_array[1])
			continue;
		if (num_array[0] != num_array[1] && num_array[1] != num_array[2])
		{
			ft_putchar(num_array[0] + '0');
			ft_putchar(num_array[1] + '0');
			ft_putchar(num_array[2] + '0');
			if (num_array[0] == 7 && num_array[1] == 8 && num_array[2] == 9)
				continue;
			ft_putchar((char)*space);
		}
	}
}
