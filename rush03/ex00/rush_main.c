/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 12:40:53 by mhorn             #+#    #+#             */
/*   Updated: 2016/08/28 16:47:03 by mhorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"
#define DIGIT(x) (x <= '9' && x >= '0')

int		main(int argc, char **argv)
{
	int a;
	int b;

	if (argc >= 3)
	{
		if (DIGIT(argv[1][0]) && DIGIT(argv[2][0]))
		{
			a = convert_int(argv[1]);
			b = convert_int(argv[2]);
			rush(a, b);
		}
	}
	return (0);
}
