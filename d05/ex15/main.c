/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 18:24:42 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/15 18:24:44 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	int test = ft_str_is_printable("ABC");
	printf("%i\n", test);
	test = ft_str_is_printable("\tab cD");
	printf("%i\n", test);
	test = ft_str_is_printable("\ntest");
	printf("%i\n", test);
	test = ft_str_is_printable("abc3123");
	printf("%i\n", test);
}

