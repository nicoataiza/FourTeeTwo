/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cataiza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 22:51:29 by cataiza           #+#    #+#             */
/*   Updated: 2024/01/27 01:39:17 by cataiza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	rush(int x, int y);
void	ft_putchar(char c);

int	main(void)
{
	rush(1,5);
	write(1, "\n", 1);
	rush(5, 1);
	write(1, "\n", 1);
	rush(1, 1);
	write(1, "\n", 1);
	rush(0, 0);
	return (0);
}
