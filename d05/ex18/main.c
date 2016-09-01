/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 16:09:48 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/16 16:09:51 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char example[100];
	char test[100];
	int length1;
	int length2;
	
	strcpy(example, "test1234");
	length1 = strlcat(example, "is a test check it out", 15);
	//length1 = length1 + strlcat(example, "hope it works!", 5);

	strcpy(test, "test1234");
	length2 = ft_strlcat(test, "is a test check it out", 15);
	//length2 = length2 + ft_strlcat(test, "hope it works!", 5);

	printf("%s\n", example );
	printf("%i\n", length1);
	printf("%s\n", test );
	printf("%i\n", length2);

	

}

