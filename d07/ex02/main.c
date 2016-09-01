/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 14:47:22 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/18 14:47:23 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int main(void)
{
	int test;
	int x;
	int y;
	int *range;

	x= 30;
	y = 40;
	//test = y - x;
	test = ft_ultimate_range(&range, x,y);
	
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