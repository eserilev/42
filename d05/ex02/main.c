/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 14:21:17 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/15 14:21:20 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);

int	main(void)
{
	char *c;
	char *d;
	char *e;
	int i;
	int j;

	c = " 	-23";
	i = atoi(c);
	j = ft_atoi(c);
	printf("%i\n", i);
	printf("%i\n", j);
}