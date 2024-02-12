/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cataiza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 20:17:04 by cataiza           #+#    #+#             */
/*   Updated: 2024/02/01 20:29:53 by cataiza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int		end;
	int		j;

	end = 0;
	j = 0;
	while (dest[end])
		end++;
	while (src[j])
	{
		dest[end] = src[j];
		j++;
		end++;
	}
	dest[end] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char d[10] = "Hello ";
	char s[8] = "World!";

	printf("%s\n", ft_strcat(d,s));
	return (0);
}*/
