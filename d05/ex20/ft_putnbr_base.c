/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 17:45:12 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/16 17:45:13 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_strln(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}

int		ft_check_base_duplicate(int base_length, char *base)
{
	int		i;
	int		j;
	int		test_base;
	int		count_base;

	i = 0;
	while (i < base_length)
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = 0;
		while (j < base_length)
		{
			test_base = ft_strncmp(&base[i], &base[j], 1);
			if (test_base == 0)
				count_base++;
			j++;
		}
		i++;
	}
	if (count_base > base_length + 1)
		return (1);
	return (0);
}

void	ft_putnbr_recursive(int nbr, char *base, int base_length)
{
	if (nbr >= base_length)
	{
		ft_putnbr_recursive(nbr / base_length, base, base_length);
		ft_putnbr_recursive(nbr % base_length, base, base_length);
	}
	else
		ft_putchar(base[nbr]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_length;
	int		check_base;

	check_base = 0;
	base_length = ft_strln(base);
	check_base = ft_check_base_duplicate(base_length, base);
	if (check_base > 0)
		base_length = 0;
	if (base_length > 1)
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			ft_putchar('-');
		}
		ft_putnbr_recursive(nbr, base, base_length);
	}
}
