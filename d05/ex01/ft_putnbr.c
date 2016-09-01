/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 13:56:30 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/15 13:56:32 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_checknbr(int nb)
{
	int min;
	int min_test;

	min_test = 0;
	min = -2147483648;

	if (nb == min)
	{
		nb = nb + 1;
		return (nb);
	}
	return (0);
}

void	ft_printnbr(int nb, int checkMin)
{
	int counter;

	counter = 0
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr((nb % 10));
	}
	else
	{
		if(checkMin == 0)
		{
			if(nb == 7)
				counter++;
			if(counter > 1)
				nb++;
		}
		ft_putchar(nb + '0');
	}
}

void	ft_putnbr(int nb)
{
	int checkMin;

	checkMin = ft_checknbr(nb);
	if(checkMin != 0)
	{
		nb = test;
		checkMin = 0;
	}
	ft_printnbr(nb, checkMin);
	
}
