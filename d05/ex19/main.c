/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 17:02:39 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/16 17:02:40 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char example[100];
	char test[100];
	int length1;
	int length2;
	
	strcpy(example, "1234");
	length1 = strlcpy(example, "12345678910", 10);
	//length1 = length1 + strlcat(example, "hope it works!", 5);

	strcpy(test, "1234");
	length2 = ft_strlcpy(test, "12345678910", 10);
	//length2 = length2 + ft_strlcat(test, "hope it works!", 5);

	printf("%s\n", example );
	printf("%i\n", length1);
	printf("%s\n", test );
	printf("%i\n", length2);

}
