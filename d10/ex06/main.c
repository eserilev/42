/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 18:24:49 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/23 18:24:53 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_do_op.h"

int	ft_math(int a, int b, char op)
{
	int			i;
	t_calculate	calculate[5];

	i = 0;
	calculate[0].op = '+';
	calculate[0].f = ft_add;
	calculate[1].op = '-';
	calculate[1].f = ft_subtract;
	calculate[2].op = '*';
	calculate[2].f = ft_multiply;
	calculate[3].op = '/';
	calculate[3].f = ft_divide;
	calculate[4].op = '%';
	calculate[4].f = ft_modulo;
	while (i < 5)
	{
		if (op == calculate[i].op)
			return (calculate[i].f(a, b));
		i++;
	}
	return (0);
}

int	ft_is_valid(char op, int b)
{
	if (op == '/' && b == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	else if (op == '%' && b == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (ft_is_valid(argv[2][0], ft_atoi(argv[3])))
		{
			ft_putnbr(ft_math(ft_atoi(argv[1]), ft_atoi(argv[3]), argv[2][0]));
			ft_putchar('\n');
		}
	}
	return (0);
}
