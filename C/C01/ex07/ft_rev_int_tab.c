/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cataiza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:50:07 by cataiza           #+#    #+#             */
/*   Updated: 2024/01/26 19:37:39 by cataiza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		ctr;
	int		temp;

	ctr = -1;
	while (ctr++ < ((size - 1) / 2))
	{
		temp = tab[ctr];
		tab[ctr] = tab[size - 1 - ctr];
		tab[size - 1 - ctr] = temp;
	}
}
/*
int	main(void)
{
	int		size;
	int		i;
	int		tab[] = {1, 2, 3, 4, 5, 6};

	i = -1;
	size = 6;
	ft_rev_int_tab(tab, size);
	while (i++ < size - 1)
	{
		printf("%d ", tab[i]);
	}
	return (0);
}*/
