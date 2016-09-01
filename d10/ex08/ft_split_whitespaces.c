/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 14:58:05 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/20 14:58:07 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count_whitespaces(char *str)
{
	int space_count;
	int i;

	space_count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			if (str[i + 1] != ' ' && str[i + 1] != '\t' && str[i + 1] != '\n')
				space_count++;
		}
		i++;
	}
	return (space_count);
}

int		check_whitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\0')
	{
		return (1);
	}
	else
		return (0);
}

int		count_characters(char *str, int i)
{
	int	char_count;

	char_count = 0;
	while (str[i])
	{
		if (str[i + 1] != ' ' && str[i + 1] != '\t' && str[i + 1] != '\n')
			char_count++;
		else
			break ;
		i++;
	}
	return (char_count);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**word;
	char	*words;

	i = 0;
	j = 0;
	word = (char**)malloc(sizeof(char*) * (count_whitespaces(str) + 2));
	while (str[i] != '\0')
	{
		if (check_whitespace(str[i]) == 1)
			i++;
		else
		{
			words = malloc(sizeof(char) * (count_characters(str, i) + 1));
			k = 0;
			while (check_whitespace(str[i]) == 0)
				words[k++] = str[i++];
			words[k] = '\0';
			word[j++] = words;
		}
	}
	word[j] = NULL;
	return (word);
}
