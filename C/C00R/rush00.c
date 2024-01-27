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

void	ft_putchar(char c);

void	write_line(int x, char start, char mid, char end)
{
	int 	ctr;

	ctr = -1;
	while (ctr++ < x - 1)
	{
		if (ctr == 0)
		{
			ft_putchar(start); 
		}
		else if(ctr == x - 1)
		{
			ft_putchar(end);
		}
		else
		{
			ft_putchar(mid);
		}
	}
}

void	rush(int x, int y)
{
	/* loop through y
			if you're at the start
				write first line
			elif you're at the end
				write the middle
			else
				write middle line 
	*/
	int		ctr;

	ctr = -1;
	while (ctr++ < y - 1)
	{
		if (ctr == 0)
		{
			write_line(x, 'o', '-', 'o');
		} 
		else if (ctr == y - 1)
		{
			write_line(x, 'o', '-', 'o');
		}
		else
		{
			write_line(x, '|', ' ', '|');
		}
		write(1, "\n", 1);
	}
}
