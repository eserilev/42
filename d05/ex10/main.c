/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 17:19:36 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/15 17:19:37 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char *test2;
	int test1;
	char test[] = "	hey.\nh 	!this 3+is .a	om+h (/test my ~dude";
	int i;

	i = 0;
	test2 = ft_strcapitalize(test);
	printf("%s", test2);
}
