/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cataiza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:01:05 by cataiza           #+#    #+#             */
/*   Updated: 2024/01/28 15:08:05 by cataiza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (*str < 97 || *str > 122)
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	int		test;

	test = ft_str_is_lowercase("");
	printf("%d", test);
	printf("\n");
	test = ft_str_is_lowercase("abcdefg");
	printf("%d", test);
	printf("\n");
	test = ft_str_is_lowercase("abcABC123");
	printf("%d", test);
	printf("\n");
}
*/
