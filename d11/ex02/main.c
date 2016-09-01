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


void	ft_list_push_front(t_list **begin_list, void *data);

int main(void)
{
	char *i;
	t_list *test;

	i = "GO";

	test = ft_create_elem(i);
	ft_list_push_front(&test, "LAKERS");
	while(test)
	{
		printf("%s\n", test->data);
		test = test->next;
	}
	
}
