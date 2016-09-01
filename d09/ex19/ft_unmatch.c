/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 15:43:28 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/19 15:43:29 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}

int	ft_unmatch(int *tab, int length)
{
	int i;
	int no_pair;
	int pair;
	int j;
	int l;

	l = length;
	i = 0;
	while (tab[i] != '\0')
	{
		j = 0;
		pair = 0;
		while (tab[j] != '\0')
		{
			if (ft_strcmp(tab[i], tab[j]) == 0)
				pair = 1;
			j++;
		}
		if (pair != 1)
			no_pair = tab[i];
		i++;
	}
}
