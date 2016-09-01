/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkvalid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/30 14:51:47 by aquint            #+#    #+#             */
/*   Updated: 2016/08/31 22:21:01 by aquint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

int		squareheight(t_list *input)
{
	char	*r_num;
	int		num;
	int		i;

	i = 0;
	if (!(input->data >= 48 && input->data <= 57))
		return (0);
	else
	{
		r_num = (char*)malloc(sizeof(char) * 11);
		while (input->data >= 48 && input->data <= 57)
		{
			r_num[i] = input->data;
			input = input->next;
			i++;
		}
		r_num[i] = '\0';
		num = ft_atoi(r_num);
		free(r_num);
		return (num);
	}
}

char	*vari(t_list *input)
{
	char	*var;

	var = (char*)malloc(sizeof(char) * 4);
	while (input->data >= 48 && input->data <= 57)
		input = input->next;
	var[0] = input->data;
	input = input->next;
	var[1] = input->data;
	input = input->next;
	var[2] = input->data;
	var[3] = '\0';
	return (var);
}

int		check_h_w(t_list *input, char *var, int r_num, int i)
{
	int len;
	int hei;

	hei = 0;
	while (input != NULL)
	{
		len = 0;
		while (input->data != '\n')
		{
			if (!((input->data == var[0]) || (input->data == var[1])))
				return (0);
			input = input->next;
			len++;
		}
		if (len != i)
			return (0);
		hei++;
		input = input->next;
	}
	if (r_num != hei)
		return (0);
	return (1);
}

int		checkvalid(t_list *input)
{
	int		i;
	int		r_num;
	int		j;
	char	*var;

	i = 0;
	r_num = squareheight(input);
	if (r_num <= 0)
		return (0);
	j = ft_count_column(input);
	while (input->data >= 48 && input->data <= 57)
		input = input->next;
	var = vari(input);
	while (input->data != '\n')
	{
		input = input->next;
		i++;
	}
	if (i != 3)
		return (0);
	input = input->next;
	return (check_h_w(input, var, r_num, j));
}
