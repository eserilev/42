/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 17:44:56 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/15 17:44:58 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_alpha(char *str);

int main(void)
{
	int test = ft_str_is_alpha("a");
	printf("%i\n", test);
	 test = ft_str_is_alpha("	wjat");
	printf("%i\n", test);
	test = ft_str_is_alpha(" 1    extra      space");
	printf("%i\n", test);

}