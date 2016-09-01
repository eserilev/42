/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 19:31:33 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/17 19:31:36 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strln(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		length;

	if (!src)
		return (0);
	length = ft_strln(src);
	dest = (char *)malloc(sizeof(char) * (length + 1));
	if (!dest)
		return (0);
	i = -1;
	while (++i < len)
		dest[i] = src[i];
	new[i] = '\0';
	return (dest);
}
