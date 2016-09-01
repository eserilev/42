/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 17:39:36 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/24 17:39:37 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
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
