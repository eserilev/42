/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 18:50:58 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/24 18:50:59 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*this;
	t_list	*next;
	t_list	*last;

	this = *begin_list;
	last = NULL;
	while (this)
	{
		next = this->next;
		this->next = last;
		last = this;
		this = next;
	}
	*begin_list = last;
}
