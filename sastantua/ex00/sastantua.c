/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 14:29:37 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/14 14:29:42 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}



void	build_pyramid(int i, int section, int max_length, int size, int max_height)
{
	int h;
	int s;
	int empty_block;

	h = 0;
	empty_block = 1;
	s = section;
	
	while (h < s)
	{
		empty_block = max_height - empty_block;
		if(h < max_height)
		{			
			ft_putchar(' ');
			empty_block ++;
		}

		h++;
	}
}

void	sastantua(int size)
{
	int total;
	int max_panel_height;
	int panel_height[size];
	int last_line;
	int i;
	int pyramid_height;

	total = 0;
	while (total < size)
	
		max_panel_height = total + 3;
		panel_height[total] = max_panel_height;
		pyramid_height += pyramid_height[total] 
		total++;
	}
	if(size == 1 || size == 5)
		last_line = (max_panel_height * size * 2) + 1;
	else
		last_line = (max_panel_height * size * 2) + 3;
	i = 0;
	ft_putchar('\n');
	while(i < size)
	{
		build_pyramid(i, panel_height[i], last_line, size, pyramid_height);
		i++;
	}
}

int main(void)
{
	sastantua(4);
}