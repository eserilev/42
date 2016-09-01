/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 16:34:53 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/15 16:52:37 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char src[40];
	int test1;

	test1 = strncmp("zzzzza1-416456789", "d334xf", 2);
	printf("%i\n", test1);
	test1 = ft_strncmp("zzzzza1-416456789", "d334xf", 2);
	printf("%i\n", test1);
}
