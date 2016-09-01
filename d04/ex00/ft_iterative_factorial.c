/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 23:45:58 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/12 23:46:01 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_facotrial(int nb)
{
	int factorial;

	factorial = nb;
	while (nb > 1)
	{
		nb--;
		factorial = factorial * nb;
	}
	return (factorial);
}
