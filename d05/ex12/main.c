/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 22:08:03 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/16 22:08:04 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>

int	ft_str_is_numeric(char *str);

int main(void)
{
	int test = ft_str_is_numeric("1234");
	printf("%i\n", test);
	 test = ft_str_is_numeric("	wjat");
	printf("%i\n", test);
	test = ft_str_is_numeric(" 1    extra      space");
	printf("%i\n", test);

}
