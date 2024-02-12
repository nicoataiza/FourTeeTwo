/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cataiza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 20:07:44 by cataiza           #+#    #+#             */
/*   Updated: 2024/02/01 19:11:47 by cataiza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char s1[] = "abcd";
	char s2[] = "abcd";
	char s3[] = "Hello!";
	char s4[] = "abcdefg";
		
	printf("%d", strcmp(s1,s2));
	printf("\n");

	printf("%d", ft_strcmp(s1,s2));
	printf("\n");

	printf("%d", strcmp(s4,s1));
	printf("\n");	
	printf("%d", ft_strcmp(s4,s1));
	printf("\n");

	printf("%d", strcmp(s3,s4));
	printf("\n");

	printf("%d", ft_strcmp(s3,s4));
	printf("\n");
}*/
