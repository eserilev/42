/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/30 14:10:27 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/31 22:21:13 by aquint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

char	*g_vars;

char	**ft_read_file(int fd)
{
	char	buffer;
	int		i;
	t_list	*list;
	char	**str;

	i = 0;
	list = NULL;
	while ((read(fd, &buffer, 1)) > 0)
	{
		ft_list_push_back(&list, buffer);
		i++;
	}
	if (list == NULL)
	{
		write(2, "map error\n", 10);
		return (NULL);
	}
	else if (!(checkvalid(list)))
	{
		write(2, "map error\n", 10);
		str = NULL;
		return (NULL);
	}
	else
	{
		g_vars = vari(list);
		str = ft_concat_string(list);
		free(list);
		return (str);
	}
}

int		check_base_case(char **str)
{
	
	if (str == NULL)
		return (0);
	if (row_size(str) == 1 && col_size(str) == 1)
	{
		if (str[0][0] == g_vars[0])
		{
			ft_putchar(g_vars[2]);
			ft_putchar('\n');
		}
		if (str[0][0] == g_vars[1])
		{
			ft_putchar(g_vars[1]);
			ft_putchar('\n');
		}
		return (0);
	}
	else
		return (1);
}

int		check_file(int file)
{
	char	**str;

	if (file < 0)
	{
		str = ft_read_file(0);
		if (check_base_case(str))
		{
			str = bsq(str, g_vars);
			free(str);
		}
		return (0);
	}
	return (1);
}

void	check_arg(int argc)
{
	if (argc == 1)
		ft_read_file(0);
}

int		main(int argc, char **argv)
{
	int		*fd;
	char	**str;
	int		i;

	i = 1;
	fd = malloc(sizeof(int) * (argc + 1));
	check_arg(argc);
	while (i < argc)
	{
		fd[i] = open(argv[i], O_RDWR);
		if (!check_file(fd[i]))
			i++;
		else
		{
			str = ft_read_file(fd[i]);
			if (check_base_case(str))
			{
				str = bsq(str, g_vars);
				free(str);
			}
			i++;
		}
		if (i < argc)
			ft_putchar('\n');
	}
}
