/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 12:59:13 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/12 12:59:15 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int numerator;
	int denominator;

	numerator = *a;
	denominator = *b;
	*a = numerator / denominator;
	*b = numerator % denominator;
}
