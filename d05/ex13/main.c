/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 18:20:37 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/15 18:20:39 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	int test = ft_str_is_lowercase("abc");
	printf("%i\n", test);
	test = ft_str_is_lowercase("ab cD");
	printf("%i\n", test);
	test = ft_str_is_lowercase("abcdef");
	printf("%i\n", test);
	test = ft_str_is_lowercase("abc3123");
	printf("%i\n", test);
}
