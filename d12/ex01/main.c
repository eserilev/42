/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 13:57:46 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/25 13:57:48 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_read_file(int fd)
{
	int		bytes_read;
	char	buffer[999];
	int		i;

	i = 0;
	bytes_read = 0;
	if ((bytes_read = read(fd, buffer, 999)) > 0)
	{
		while (buffer[i])
		{
			ft_putchar(buffer[i]);
			i++;
		}
		close(fd);
	}
}

int		main(int argc, char **argv)
{
	int fd[2];

	fd[0] = 0;
	if (argc == 2)
	{
		fd[0] = open(argv[1], O_RDONLY);
		ft_read_file(fd[0]);
	}
	else
	{
		if (argc < 2)
		{
			ft_putstr("File name missing.\n");
		}
		else if (argc > 2)
		{
			ft_putstr("Too many arguments.\n");
		}
	}
}
