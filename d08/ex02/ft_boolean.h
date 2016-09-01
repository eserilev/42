/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 20:44:39 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/20 20:44:40 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef	int	t_bool;

# define TRUE	1
# define FALSE	0
# define EVEN(x)	((x % 2) == 0 ? TRUE : FALSE)
# define SUCCESS	0

# define EVEN_MSG	"I have a pair number of arguments.\n"
# define ODD_MSG		"I have an impair number of arguments.\n"

void		ft_putstr(char *str);
t_bool		ft_is_even(int nbr);

#endif
