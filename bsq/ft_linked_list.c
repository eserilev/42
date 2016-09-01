/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linked_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/28 14:13:40 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/31 20:51:00 by aquint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list	*ft_create_elem(char data)
{
	t_list *list;

	list = malloc(sizeof(t_list) * 1);
	if (list)
	{
		list->data = data;
		list->next = NULL;
	}
	return (list);
}

void	ft_list_push_back(t_list **begin_list, char data)
{
	t_list *new_list;

	new_list = *begin_list;
	if (new_list)
	{
		while (new_list->next)
			new_list = new_list->next;
		new_list->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
