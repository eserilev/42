/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 16:52:44 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/15 16:52:46 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char *test2;
	int test1;
	char test[] = "this 123is 123a test";
	int i;

	i = 0;
	test2 = ft_strupcase(test);
	printf("%s", test2);
}
