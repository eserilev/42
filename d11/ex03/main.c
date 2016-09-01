/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 22:24:08 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/24 22:24:09 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"


int	ft_list_size(t_list *begin_list);

int main(void)
{
	char *i;
	t_list *test;

	i = "GO";

	test = ft_create_elem(i);
	printf("%i", ft_list_size(test));
	
}
