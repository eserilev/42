/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 22:31:12 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/20 22:31:13 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int	main(int argc, char **argv)
{
	struct s_stock_par *stock;
	
	stock = ft_param_to_tab(argc, argv);	
	ft_show_tab(stock);
	return (0);
}
