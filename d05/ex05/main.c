/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 15:22:45 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/15 15:22:51 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char src[40];
	char *test1;
	char *test2;

	test1 = strstr("xxxxthis is a test", "");

	printf("%s\n", test1);

	test2 = ft_strstr("xxxxthis is a test", "");
	printf("%s\n", test2);

}