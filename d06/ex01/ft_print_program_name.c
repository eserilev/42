/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 23:04:41 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/16 23:04:43 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	ft_putstr(char *str);

int		main(int argc, char **argv)
{
	int length;

	length = argc;
	ft_putstr(argv[0]);
	ft_putchar('\n');
	return (0);
}
