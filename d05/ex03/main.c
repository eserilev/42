/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 14:37:27 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/15 14:37:29 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char src[40];
	char dest[100];

	strcpy(src, "hello ");
	strcpy(dest, src);

	printf("%s\n", dest);

	ft_strcpy(src, "this is a test ");
	ft_strcpy(dest , src);

	printf("%s\n", dest);
}
