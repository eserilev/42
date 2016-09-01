/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 15:17:39 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/16 15:17:41 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char example[100];
	char test[100];
	
	strcpy(example, "test2");
	strcat(example, "is a test");
	strcat(example, "thats dope!");

	ft_strcat(test, "testing function...");
	ft_strcat(test, "Seems to be working, let me double check....");
	ft_strcat(test, "yup, its working");

	printf("%s\n", example );
	printf("%s\n", test );
	

}
