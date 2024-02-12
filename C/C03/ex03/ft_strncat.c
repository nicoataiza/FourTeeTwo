/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cataiza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 11:26:44 by cataiza           #+#    #+#             */
/*   Updated: 2024/02/02 11:51:41 by cataiza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	ctr;
	int				i;

	i = 0;
	ctr = 0;
	while (dest[i])
		i++;
	while (ctr < nb && src[ctr])
	{
		dest[i] = src[ctr];
		i++;
		ctr++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main(void)
{
	char l[100] = "Hello! ";
	char w[100] = "World! ";

	printf("%s\n", ft_strncat(l,w,10));
	return (0);
}*/
