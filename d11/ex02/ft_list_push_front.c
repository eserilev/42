/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 17:50:54 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/24 17:50:57 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new_list;

	if (*begin_list)
	{
		new_list = ft_create_elem(data);
		new_list->next = *begin_list;
		*begin_list = new_list;
	}
	else
		*begin_list = ft_create_elem(data);
}
