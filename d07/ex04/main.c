/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseri-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 15:28:43 by eseri-le          #+#    #+#             */
/*   Updated: 2016/08/18 15:28:44 by eseri-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char **ft_split_whitespaces(char *str);

int main(void)
{
 char **test;
 test = ft_split_whitespaces("1 21 3 4\0");
 int i = 0;
 printf("%c", test[1][1]);

}