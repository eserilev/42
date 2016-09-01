/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 14:54:19 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/19 14:54:21 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int	format;

	format = hour % 12;
	printf("THE FOLLOWING TAKES PLACE ");
	if (hour < 12)
	{
		if (hour == 11)
			printf("BETWEEN %i.00 A.M. AND %i.00 P.M.\n", hour, hour + 1);
		else
			printf("BETWEEN %i.00 P.M. AND %i.00 P.M.\n", hour, hour + 1);
	}
	else if (hour >= 12)
	{
		if (hour == 23)
			printf("BETWEEN %i.00 P.M. AND %i.00 A.M.\n", format, format + 1);
		else if (hour == 24)
			printf("BETWEEN %i.00 A.M. AND %i.00 A.M.\n", 12, format + 1);
		else if (hour == 12)
			printf("BETWEEN %i.00 P.M. AND %i.00 P.M.\n", 12, format + 1);
		else
			printf("BETWEEN %i.00 P.M. AND %i.00 P.M.\n", format, format + 1);
	}
}
