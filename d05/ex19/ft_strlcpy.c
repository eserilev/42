/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 17:01:56 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/16 17:01:57 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		dest[i] = '\0';
		i++;
	}
	while (src[j] != '\0')
	{
		if (j < size - 1)
			dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	size = j;
	return (size);
}
