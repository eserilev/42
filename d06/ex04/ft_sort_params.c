/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 23:23:39 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/16 23:23:40 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);

void	ft_sort_params(int argc, char **argv)
{
	int		sort;
	int		i;
	char	*temp;

	sort = 1;
	while (sort)
	{
		sort = 0;
		i = 0;
		while (++i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = temp;
				sort = 1;
			}
		}
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	ft_sort_params(argc, argv);
	while (++i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}
	return (0);
}
