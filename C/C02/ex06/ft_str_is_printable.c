/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cataiza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:14:51 by cataiza           #+#    #+#             */
/*   Updated: 2024/02/01 13:03:19 by cataiza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 32 && *str <= 126))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
int main(void)
{
	char d[] = {'a','b', '\n'};
	char h[] = "HelloWorld!";

	printf("%d", ft_str_is_printable(d));
	printf("%d", ft_str_is_printable(h));
}*/
