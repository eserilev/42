/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 14:45:59 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/19 14:46:01 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_generic(void)
{
	char	*display;
	int		i;

	i = 0;
	display = "Tu tu tu tu";
	while (display[i] != '\0')
	{
		ft_putchar(display[i]);
		i++;
	}
	ft_putchar(' ');
	ft_putchar(';');
	ft_putchar(' ');
	i = 0;
	while (display[i] != '\0')
	{
		ft_putchar(display[i]);
		i++;
	}
	ft_putchar('\n');
}
