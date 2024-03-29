/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cataiza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 22:44:16 by cataiza           #+#    #+#             */
/*   Updated: 2024/01/28 13:11:59 by cataiza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);

/* loop through x
		if you're at the start
			write start
		elif you're at the end
			write end
		else
			write middle
*/

void	write_line(int x, char start, char mid, char end)
{
	int		ctr;

	ctr = -1;
	while (ctr++ < x - 1)
	{
		if (ctr == 0)
		{
			ft_putchar(start);
		}
		else if (ctr == x - 1)
		{
			ft_putchar(end);
		}
		else
		{
			ft_putchar(mid);
		}
	}
}
/* Change first, mid, and end line accdg to rush0x
	 loop through y
			if you're at the start
				write first line
			elif you're at the end
				write the end
			else
				write middle line 
*/

void	rush(int x, int y)
{
	int	ctr;

	ctr = -1;
	while (ctr++ < y - 1)
	{
		if (ctr == 0)
		{
			write_line(x, '/', '*', '\\');
		}
		else if (ctr == y - 1)
		{
			write_line(x, '\\', '*', '/');
		}
		else
		{
			write_line(x, '*', ' ', '*');
		}
		write(1, "\n", 1);
	}
}
