/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cataiza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 19:31:51 by cataiza           #+#    #+#             */
/*   Updated: 2024/01/26 19:22:17 by cataiza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int		t;
	int		c;

	t = a / b;
	c = a % b;
	*div = t;
	*mod = c;
}
/*
int	main(void)
{
	int		d;
	int		e;
	int		di;
	int		mo;

	d = 11;
	e = 3;
	ft_div_mod(d, e, &di, &mo);
	printf("%d %d", di, mo);
}*/
