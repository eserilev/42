/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 14:31:30 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/19 14:31:31 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen2(char **str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		return (i);
	}
}

int	ft_compact(char **tab, int length)
{
	int	i;
	int	j;
	int	k;

	while (tab[i] != '\0')
	{
		if (tab[i] == 0)
		{
			k = 0;
			while (tab[i + k + 1] != '\0')
			{
				tab[i + k][j] = tab[i + k + 1][j];
				j++;
			}
		}
		i++;
	}
	return (ft_strlen2(tab));
}
