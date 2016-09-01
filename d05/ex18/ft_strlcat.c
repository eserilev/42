/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 15:52:09 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/16 15:52:11 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i;
	int j;
	int dest_size;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	dest_size = i;
	while (src[j] != '\0')
	{
		if (i < size - 1)
		{
			dest[i] = src[j];
			i++;
		}
		j++;
	}
	dest[i] = '\0';
	size = dest_size + j;
	return (size);
}
