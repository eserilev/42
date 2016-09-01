/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 12:08:08 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/19 12:08:10 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_button(int i, int j, int k);

int	main(void)
{
	printf("%i\n", ft_button(3, 1, 2));
	printf("%i\n", ft_button(4, 2, 5));
	printf("%i\n", ft_button(2, 4, 1));
	printf("%i\n", ft_button(5, 2, 2));
	printf("%i\n", ft_button(2, 2, 2));
	printf("%i\n", ft_button(-2, 10, -8));
}
