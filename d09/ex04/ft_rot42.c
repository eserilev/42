/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 11:34:39 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/19 11:34:41 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_rot_uppercase(char c)
{
	c = c - 65;
	c = (c + 42) % 26;
	c = c + 65;
	return (c);
}

char	ft_rot_lowercase(char c)
{
	c = c - 97;
	c = (c + 42) % 26;
	c = c + 97;
	return (c);
}

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = ft_rot_lowercase(str[i]);
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = ft_rot_uppercase(str[i]);
		else
			str[i] = str[i];
		i++;
	}
	return (str);
}
