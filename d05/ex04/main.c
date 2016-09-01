/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 15:08:40 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/15 15:08:42 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char src[40];
	char dest[100];

	strncpy(src, " 	xgonna stop", 6);
	strncpy(dest, src, 6);

	printf("%s\n", dest);

	ft_strncpy(src, " 	xgonna stop", 6);
	ft_strncpy(dest , src, 6);

	printf("%s\n", dest);
}