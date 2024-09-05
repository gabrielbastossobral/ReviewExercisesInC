/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_int.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 10:29:57 by gabastos          #+#    #+#             */
/*   Updated: 2024/09/04 09:26:56 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int(int *tab)
{
	int start = 0;
	int end = 0;
	int *size;
	int temp;

	size = tab;
	while (*size)
	{
		size++;
		end++;
	}
	end = end - 1;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}

int main(void)
{
	int i = 0;
	int	tab[] = {1, 2, 3, 4, 5};
	int size = sizeof(tab) / sizeof(tab[0]);
	ft_rev_int(tab);
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	return 0;
}
