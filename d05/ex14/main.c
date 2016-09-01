/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 18:22:15 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/15 18:22:16 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	int test = ft_str_is_uppercase("ABC");
	printf("%i\n", test);
	test = ft_str_is_uppercase("ab cD");
	printf("%i\n", test);
	test = ft_str_is_uppercase("HIJ");
	printf("%i\n", test);
	test = ft_str_is_uppercase("abc3123");
	printf("%i\n", test);
}

