/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_pallindromo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 10:55:38 by gabastos          #+#    #+#             */
/*   Updated: 2024/09/04 08:33:01 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	is_palindrome(char *str)
{
	int	start;
	int	end;

	start = 0;
	end = 0;
	while (str[end] != '\0')
		end++;
	end--;
	while (start < end)
	{
		if (str[start] != str[end])
			return (0);
		start++;
		end--;
	}
	return (1);
}

void	ft_is_palindromo(char *str)
{
	if (is_palindrome(str))
	{
		while (*str)
		{
			write(1, str, 1);
			str++;
		}
		write(1, "\n", 1);
	}
	else
	{
		write(1, "\n", 1);
	}
}

int main(int argc, char *argv[])
{
	if(argc < 2)
	{
		write(1, "\n", 1);
		return (-1);
	}
	ft_is_palindromo(argv[1]);
	return 0;
}
