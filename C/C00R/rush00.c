/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cataiza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 22:44:16 by cataiza           #+#    #+#             */
/*   Updated: 2024/01/26 23:56:55 by cataiza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "function.h"

void	make_edge(char *arr, int x)
{
	int		i;

	i = 0;
	while (i < x)
	{
		if ((i == 0) | (i == (x - 1)))
		{
			*arr = 'o';
		}
		else
		{
			*arr = '-';
		}
		arr++;
		i++;
	}
	// commenting this out breaks the code lmao
	*arr = '\0';
}

void	make_mid(char *arr, int x)
{
	int		i;

	i = 0;
	while (i < x)
	{
		if ((i == 0) | (i == (x - 1)))
		{
			*arr = '|';
		}
		else
		{
			*arr = ' ';
		}
		arr++;
		i++;
	}
	// removing this breaks the code fyi
	*arr = '\0';
}

void	write_line(char *arr)
{
	while (*arr != '\0')
	{
		ft_putchar(*arr);
		arr++;
	}
}

void	rush(int x, int y)
{
	// make line with edges
	// make line in the middle
	// loop through y
	// 	write line
	int		ctr;
	char	e[x + 1];
	char	m[x + 1];

	ctr = -1;
	make_edge(&e[0],x);
	make_mid(&m[0],x);
	
	while (ctr++ < y - 1)
	{
		if ((ctr == 0) | (ctr == y - 1))
		{
			write_line(&e[0]);
		}
		else
		{
			write_line(&m[0]);
		}
		write(1, "\n", 1);
	}
}
