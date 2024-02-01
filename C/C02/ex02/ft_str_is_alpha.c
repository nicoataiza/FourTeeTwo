/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cataiza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 14:40:23 by cataiza           #+#    #+#             */
/*   Updated: 2024/01/28 15:35:38 by cataiza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (*str < 65 || *str > 122)
		{
			return (0);
		}
		else if (*str >= 91 && *str <= 96)
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	int		test;
	
	test = ft_str_is_alpha("SampleText123123123123123123123123123123123123");
	printf("%d", test);
   	test = ft_str_is_alpha("Sample Text");
	printf("%d", test);
	return (0);
}*/
