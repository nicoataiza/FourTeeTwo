/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cataiza <cataiza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:12:26 by cataiza           #+#    #+#             */
/*   Updated: 2024/02/07 20:39:39 by cataiza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i < n - 1 && (s1[i] && s2[i]))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
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
		
	printf("%d", strncmp(s1,s2,3));
	printf("\n");

	printf("%d", ft_strncmp(s1,s2,3));
	printf("\n");

	printf("%d", strncmp(s4,s1,10));
	printf("\n");	
	printf("%d", ft_strncmp(s4,s1,10));
	printf("\n");

	printf("%d", strncmp(s3,s4,5));
	printf("\n");

	printf("%d", ft_strncmp(s3,s4,5));
	printf("\n");
}*/
