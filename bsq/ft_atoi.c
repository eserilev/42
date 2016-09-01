/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 13:37:20 by aquint            #+#    #+#             */
/*   Updated: 2016/08/31 14:12:39 by aquint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int count;
	int neg;
	int newstr;

	count = 0;
	neg = 1;
	newstr = 0;
	while (str[count] == ' ' || (str[count] > 1 && str[count] < 31))
		count++;
	if (str[count] == '-')
		neg = -1;
	if (str[count] == '-' || str[count] == '+')
		count++;
	while (str[count] != '\0')
	{
		if (str[count] < 48 || str[count] > 57)
			return (newstr * neg);
		else
		{
			newstr = newstr * 10;
			newstr = newstr + (str[count] - 48);
			count++;
		}
	}
	return (newstr * neg);
}
