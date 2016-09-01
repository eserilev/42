/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 23:30:14 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/24 23:30:15 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *this;

	this = *begin_list;
	while (this)
	{
		if ((*cmp)(this->data, data_ref) == 0)
			free(this);
		this = this->next;
	}
	return (NULL);
}
