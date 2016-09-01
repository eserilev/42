/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 15:37:04 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/16 15:37:08 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, int nb);

int	main(void)
{
	char example[100];
	char test[100];
	
	strcpy(example, "	test2" );
	strncat(example, "\tis a test" , 3);
	strncat(example, "123Hope it worked!" ,4);

	ft_strncat(test, "	test2", 6);
	ft_strncat(test, "\tis a test", 3);
	ft_strncat(test, "123Hope it worked!", 4);

	printf("%s\n", example );
	printf("%s\n", test );
	

}

