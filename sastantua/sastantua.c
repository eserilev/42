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

void print_space(int counter)
{
	int i;

	i = 0;
	while (i < counter)
	{
		ft_putchar(' ');
		i++;
	}
}

void print_block(int counter, int height, int size)
{
	int i;

	i = 0;
	
	if(counter < size)
	{
		//print door
	}
	else
		while ( i < height)
		{
			if( i == 0)
				ft_putchar('/');
			if(i == counter - 1)
				ft_putchar('\\');
			else
				ft_putchar('*');
			}
		}

void	build_pyramid(int panel_height, int size, int last_line, int max_height)
{
	int p;
	int h;
	int empty_block;

	p = 0;
	h = 0;
	empty_block = 0;
	while (p < max_height)
	{
		empty_block = max_height - empty_block
		if (h <= max_height)
		{
			print_space(empty_block);
			empty_block++;
		}
		print_block(panel_height, panel_height, size);
		p++;
		h++;
	}


	/*int h;
	int s;
	int empty_block;
	int door_counter;
	int block_counter;

	h = 0;
	empty_block = 1;
	s = section;
	door_counter = 1;
	block_counter = 3;
	while (h < s)
	{
		if (if h > 0 && h % 2 == 0)
			door_counter += 2;
		empty_block = max_height - empty_block;
		
		if (h <= max_height)
		{			
			print_space(empty_block);
			print_block(block_counter);
			empty_block++;
		}
		
		if( size % 2 == 0)
		{

		}
		else
		{

		}


		h++;
	}*/
}

void	sastantua(int size)
{
	int total;
	int panel_height[size];
	int last_line;
	int counter;
	int max_height
	int i;
	
	total = 0;
	ft_putchar('\n');
	while (total < size)
	{
		panel_height[total] = total + 3;
		max_height += panel_height[total]
		if(size % 2 != 0)
		{
			if(counter %2 == 0)
				last_line = (panel_height * size * 2) + 1;
			else
				last_line = (panel_height * size * 2) + 3;
			counter++;
		}
		else
			last_line = (panel_height * size * 2) + 3;
		
		total++;
	}
	i = 0
	while(i < size)
	{
		build_pyramid(panel_height, size, last_line, max_height);
		i++;
	}

}

int main(void)
{
	sastantua(4);
}