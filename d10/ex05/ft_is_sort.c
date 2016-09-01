/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 15:33:56 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/23 15:33:58 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int counter_ascending;
	int counter_descending;

	i = 0;
	counter_ascending = 0;
	counter_descending = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) >= 0)
			counter_descending++;
		if (f(tab[i], tab[i + 1]) <= 0)
			counter_ascending++;
	}
	if (counter_ascending == length - 1)
		return (1);
	if (counter_descending == length - 1)
		return (1);
	return (0);
}
