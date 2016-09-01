/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 14:40:04 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/23 14:40:22 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *values;

	i = 0;
	values = (int)malloc(sizeof(int) * (length + 1));
	while (i < length)
	{
		values[i] = f(tab[i]);
		i++;
	}
	return (values);
}
