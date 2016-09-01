/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 22:49:42 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/20 22:49:44 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	match(char *s1, char *s2)
{
	if (*s2 != '*')
	{
		if (*s1 == '\0' && *s2 == '\0')
			return (1);
		else if (*s1 == *s2)
			return (match(s1 + 1, s2 + 1));
		else if (*s1 != *s2)
			return (0);
	}
	else
	{
		if (*(s2 + 1) == '\0')
			return (1);
		else if (*(s2 + 1))
			return (match(s1, s2 + 1));
		else if (*s1 == *(s2 + 1))
			return (ft_match((s1 + 1), (s2 + 2)) || ft_match((s1 + 1), s2));
		else if (*s1 = '\0')
			return (0);
		else if (*s1 != *(s2 + 1))
			return (ft_match((s1 + 1), s2));
	}
}
