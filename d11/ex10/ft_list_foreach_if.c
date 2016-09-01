/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 23:21:53 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/24 23:21:54 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), \
	void *data_ref, int (*cmp)())
{
	t_list	*this;

	this = begin_list;
	while (this)
	{
		if ((*cmp)(this->data, data_ref) == 0)
			(*f)(thiis->data);
		this = this->next;
	}
}
