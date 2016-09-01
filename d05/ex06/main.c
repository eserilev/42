/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 16:08:30 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/15 16:08:32 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char src[40];
	int test1;

	test1 = strcmp("zzzzabcabc", "xxxxxx");
	printf("%i\n", test1);
	test1 = ft_strcmp("zzzzabcabc", "xxxxxx");
	printf("%i\n", test1);
}
