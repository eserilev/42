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
#include "ft_opp.h"

int	ft_math(int a, int b, char op)
{
	int i;

	i = 0;
	while (i < 5)
	{
		if (*g_opptab[i].c == op)
		{
			ft_putnbr(g_opptab[i].func(a, b));
			ft_putchar('\n');
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_usage(int a, int b)
{
	a++;
	b++;
	ft_putstr("error: only [ - + * / % ] are accepted.");
	ft_putchar('\n');
	return (1);
}

int	ft_is_valid(char op, int b)
{
	if (op != '+' && op != '-' && op != '/' && op != '*' && op != '%')
		return (0);
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
			ft_math(ft_atoi(argv[1]), ft_atoi(argv[3]), argv[2][0]);
		else
			ft_usage(1, 1);
	}
	return (0);
}
