/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_tab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 10:13:00 by gabastos          #+#    #+#             */
/*   Updated: 2024/09/03 10:29:08 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_tab(char *tab)
{
	int	start = 0;
	int	end = 0;
	char *count; 
	char temp;

	count = tab;
	while (*count)
	{
		end++;
		count++;
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
	char str[] = "frase qualquer";
	ft_rev_tab(str);
	printf("%s", str);
	return 0;
}
