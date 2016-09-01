/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 13:15:58 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/19 13:15:59 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

int		ft_strcmp(char *s1, char *s2)
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

int		ft_spy(int argc, char **argv)
{
	int i;
	int alert;

	i = 0;
	alert = 0;
	while (i < argc)
	{
		ft_strlowcase(argv[i]);
		if (ft_strcmp(argv[i], "president") == 0)
			alert = 1;
		if (ft_strcmp(argv[i], "attack") == 0)
			alert = 1;
		if (ft_strcmp(argv[i], "powers") == 0)
			alert = 1;
		i++;
	}
	return (alert);
}

int		main(int argc, char **argv)
{
	int		i;
	int		alert;
	char	*alert_message;

	i = 0;
	alert = ft_spy(argc, argv);
	alert_message = "Alert!!!";
	if (alert == 1)
	{
		while (alert_message[i] != '\0')
		{
			ft_putchar(alert_message[i]);
			i++;
		}
		ft_putchar('\n');
	}
	return (0);
}
