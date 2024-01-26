/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cataiza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 19:31:51 by cataiza           #+#    #+#             */
/*   Updated: 2024/01/26 19:29:01 by cataiza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		t;
	int		c;

	t = *a / *b;
	c = *a % *b;
	*a = t;
	*b = c;
}
/*
int	main(void)
{
	int		d;
	int		e;

	d = 11;
	e = 3;
	ft_ultimate_div_mod(&d, &e);
	printf("%d %d", d, e);
}*/
