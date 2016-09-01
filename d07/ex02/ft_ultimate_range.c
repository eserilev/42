/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 20:02:27 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/17 20:02:29 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int length;
	int *temp;
	int i;

	if (min >= max)
	{
		*range = (void *)0;
		return (0);
	}
	length = max - min;
	temp = (int *)malloc(sizeof(*temp) * (length));
	i = 0;
	while (min < max)
	{
		temp[i] = min;
		i++;
		min++;
	}
	*range = temp;
	return (length);
}
