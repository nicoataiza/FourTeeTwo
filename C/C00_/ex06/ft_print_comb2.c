/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cataiza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:34:32 by cataiza           #+#    #+#             */
/*   Updated: 2024/01/24 13:29:25 by cataiza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_write(int n)
{
	char	d;
	char	z;
	int		rem;
	int		tens;

	if (n < 10)
	{
		z = '0';
		write(1, &z, 1);
		d = n + '0';
		write(1, &d, 1);
	}
	else
	{
		tens = n / 10;
		d = tens + '0';
		write(1, &d, 1);
		rem = n - (tens * 10);
		d = rem + '0';
		write(1, &d, 1);
	}
}

void	ft_print_comb2(void)
	// while num < 99
	// 	num2 = num + 1
	// 	while num2 <= 99
	// 	 write(num)
	// 	 write( )
	// 	 write(num2)
	// 	 if num == 98:
	// 	  break
	// 	 write(, )
	// 	 write
{
	int	num;
	int	num2;

	num = 0;
	while (num < 99)
	{
		num2 = num + 1;
		while (num2 <= 99)
		{
			if (!(num == 0 && num2 == 1))
			{
				write(1, ", ", 2);
			}
			ft_write(num);
			write(1, " ", 1);
			ft_write(num2);
			num2++;
		}
		//write(1, " ", 1);
		num++;
	}
}
