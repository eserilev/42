/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 14:10:13 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/18 14:10:15 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_range(int min, int max);

int main(void)
{
	int test;
	int x;
	int y;
	int *range;

	x= -30;
	y = 40;
	test = y - x;
	range = ft_range(x,y);
	int i = 0;
	if(range == NULL)
		printf("NULL");
	else
	{
	while(i < test)
		{
		printf("%i\n", range[i]);
		i++;
		}
	}
	return (0);
}