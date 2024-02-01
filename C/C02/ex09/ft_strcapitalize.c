/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cataiza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:29:09 by cataiza           #+#    #+#             */
/*   Updated: 2024/02/01 13:40:04 by cataiza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;
	char			c;
	int				cap;

	i = 0;
	cap = 1;
	while (str[i] != '\0')
	{
		c = str[i];
		if (cap == 1 && c >= 'a' && c <= 'z')
			str[i] = str[i] - 32;
		else if (cap == 0 && c >= 'A' && c <= 'Z')
			str[i] = str[i] + 32;
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 'z')
			cap = 1;
		else
			cap = 0;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char test[] = "salut, 42mots quaRante-deux; cinquante+et+un";

	ft_strcapitalize(test);
	printf("%s\n", test);
	return (0);
}
*/
