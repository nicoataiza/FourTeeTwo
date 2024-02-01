/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cataiza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 14:47:39 by cataiza           #+#    #+#             */
/*   Updated: 2024/01/28 14:56:39 by cataiza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (*str < 48 || *str > 57)
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

	test = ft_str_is_numeric("12345678");
	printf("%d", test);
	printf("\n");
	test = ft_str_is_numeric("apple");
	printf("%d", test);
}
*/
