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


t_list	*ft_list_push_params(int ac, char **av);
t_list	*ft_list_at(t_list *begin_list, unsigned int nbr);

int main(int argc, char **argv)
{
	char *i;
	t_list *test;

	i = "GO";

	test = ft_list_push_params(argc, argv);
	printf("%s", (ft_list_at(test, 1))->data);


	
}
