/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 16:21:30 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/23 16:21:32 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DO_OP_H
# define FT_DO_OP_H
# include <unistd.h>

typedef struct	s_calculate
{
	char	op;
	int		(*f)(int a, int b);
}				t_calculate;
int				ft_atoi(char *str);
int				ft_add(int a, int b);
int				ft_subtract(int a, int b);
int				ft_multiply(int a, int b);
int				ft_divide(int a, int b);
int				ft_modulo(int a, int b);
int				ft_math(int a, int b, char op);
void			ft_putchar(char c);
void			ft_putnbr(int nbr);
void			ft_putstr(char *str);
#endif
