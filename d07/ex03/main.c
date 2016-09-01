/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 15:03:01 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/18 15:03:02 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_concat_params(int argc, char **argv);

int main(int argc, char **argv)
{
	char *test;
	int i;

	i = 0;
	test = ft_concat_params(argc, argv);
	while (test[i] != '\0')
	{
		printf("%c", test[i]);
		i++;
	}

}
