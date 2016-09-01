/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 17:12:11 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/15 17:12:13 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char *test2;
	int test1;
	char test[] = "THIS 123IS 123A \nTEST";
	int i;

	i = 0;
	test2 = ft_strlowcase(test);
	printf("%s", test2);
}
