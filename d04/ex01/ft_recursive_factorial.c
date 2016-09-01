/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 00:08:13 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/13 00:08:15 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int factorial;

	factorial = nb;
	while (nb > 1)
	{
		nb--;
		return (factorial * ft_recursive_factorial(nb));
	}
	return (factorial);
}
