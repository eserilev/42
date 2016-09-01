/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 12:02:18 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/19 12:02:20 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_button(int i, int j, int k)
{
	if (i >= j && i <= k)
		return (i);
	if (i <= j && i >= k)
		return (i);
	if (k <= j && k >= i)
		return (k);
	if (k >= j && k <= i)
		return (k);
	if (j <= k && j >= i)
		return (j);
	if (j >= k && j <= i)
		return (j);
	return (i);
}
