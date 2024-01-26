/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cataiza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 20:54:26 by cataiza           #+#    #+#             */
/*   Updated: 2024/01/26 19:30:27 by cataiza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int		c;

	c = 0;
	while (*str != '\0')
	{
		c++;
		str++;
	}
	return (c);
}
/*
int	main(void)
{
	char s[27] = "abcdefghijklmnopqrstuvwxyz";
	char *s_start = &s[0];
	int n;

	n = ft_strlen(s_start);
	printf("%d", n);
}*/
