/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cataiza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 19:38:25 by cataiza           #+#    #+#             */
/*   Updated: 2024/01/27 13:36:29 by cataiza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	swap(int *a, int *b)
{
	int		temp;

	if (*a < *b)
	{
		temp = *a;
		*a = *b;
		*b = temp;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int		ctr;
	int		*curr;
	int		*start;
	int		*prev;

	start = tab;
	ctr = 0;
	while (ctr < size)
	{
		curr = tab;
		curr += ctr;
		while (curr != start)
		{
			prev = curr - 1;
			swap(curr, prev);
			curr--;
		}
		ctr++;
	}
}
/*
void	print_arr(int *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
}

int	main(void)
{
	int nums[] = {3,5,1,2,77,9};

	print_arr(nums, 6);
	ft_sort_int_tab(&nums[0],6);
	printf("%s", "\n");
	print_arr(nums, 6);
	return (0);
}*/
