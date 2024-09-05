/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_capitalize.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 10:39:53 by gabastos          #+#    #+#             */
/*   Updated: 2024/09/05 10:55:12 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	is_alpha(char str)
{
	return ((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z'));
}

char	is_numeric(char str)
{
	return (str >= '1' && str <= '9');
}

char	is_alpha_numeric(char str)
{
	return (is_alpha(str) || is_numeric(str));
}

void	ft_str_capitalize(char *str)
{
	char	*origin;
	int		capitalize;

	origin = str;
	capitalize = 1;
	while (*str)
	{
		if (capitalize && *str >= 'a' && *str <= 'z')
		{
			*str -= 32;
			capitalize = 0;
		}
		else if (!capitalize && *str >= 'A' && *str <= 'Z')
			*str += 32;
		else if (!is_alpha_numeric(*str))
			capitalize = 1;
		else
			capitalize = 0;
		str++;
	}
}

int main(int argc, char const *argv[])
{
	char str[] = "oi tudo bem, 49olaa, *&teSTe";
	ft_str_capitalize(str);
	printf("%s", str);
	return 0;
}
