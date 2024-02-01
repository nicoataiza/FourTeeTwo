/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cataiza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 12:37:35 by cataiza           #+#    #+#             */
/*   Updated: 2024/02/01 18:38:24 by cataiza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	src[40];
	char	dest[39];
	
	//memset(dest, '\0', sizeof(dest));
	//ft_strcpy(src, "This is tutorialspoint.com");
	ft_strcpy(dest,src);
	printf("Final copy: %s\n", dest);
	return (0);
}*/
