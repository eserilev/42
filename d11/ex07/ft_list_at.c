/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 18:39:46 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/24 18:39:47 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*list;

	i = 0;
	list = begin_list;
	if (list)
	{
		while (i < nbr)
		{
			list = list->next;
			i++;
		}
		return (list);
	}
	else
		return (NULL);
}
