/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cataiza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 09:26:49 by cataiza           #+#    #+#             */
/*   Updated: 2024/01/24 09:51:41 by cataiza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	p;

	if (n < 0)
	{
		p = 'N';
	}
	else
	{
		p = 'P';
	}
	write(1, &p, 1);
}
