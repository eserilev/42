/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 15:28:38 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/18 15:28:40 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_word_counter(char *str)
{
	int	i;
	int	word_count;
	int	space_check;
	int	word_check;

	i = 0;
	word_count = 0;
	space_check = 0;
	while (str[i] != '\0')
	{
		if ((str[i] != 9 || str[i] != 32 || str[i] != '\n') && !word_check)
		{
			space_check = 0;
			word_check = 1;
			word_count++;
		}
		if ((str[i] == 9 || str[i] == 32 || str[i] == '\n') && !space_check)
		{
			word_check = 0;
			space_check = 1;
		}
		i++;
	}
	return (word_count);
}

int		ft_char_counter(char *str, int i)
{
	int count;

	count = 0;
	while (str[i] != 9 && str[i] != 32 && str[i] != '\n' && str[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

char	**ft_split_whitespaces(char *str)
{
	char	**split;
	int		i;
	int		j;
	int		k;
	int		word_count;

	j = 0;
	split = malloc(sizeof(char*) * (ft_word_counter(str)));
	i = 0;
	while (str[i] != '\0')
	{
		k = 0;
		if ((split[j] = malloc(sizeof(char) * ft_char_counter(str, i))) == NULL)
			return (NULL);
		while (str[i] != 9 && str[i] != 32 && str[i] != '\n' && str[i] != '\0')
			split[j][k++] = str[i++];
		split[j++][k] = '\0';
		i++;
	}
	split[j] = 0;
	return (split);
}
