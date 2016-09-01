/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 12:09:09 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/10 12:09:13 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_alphabet(void)
{
	char counter;

	counter = 'a';

	while (counter <= 'z')
	{
		int y = ft_putchar(counter);
		counter++;
	}
}

int main(void)
{
	ft_print_alphabet();

}





