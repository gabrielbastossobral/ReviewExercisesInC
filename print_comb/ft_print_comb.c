/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 09:03:45 by gabastos          #+#    #+#             */
/*   Updated: 2024/09/05 09:47:34 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	number1;
	char	number2;
	char	number3;

	number1 = '0';
	while (number1 <= '9')
	{
		number2 = number1 + 1;
		while (number2 <= '9')
		{
			number3 = number2 + 1;
			while (number3 <= '9')
			{
				write(1, &number1, 1);
				write(1, &number2, 1);
				write(1, &number3, 1);
				if (number1 != '7' || number2 != '8' || number3 != '9')
				{
					write(1, ", ", 2);
				}
				number3++;
			}
			number2++;
		}
		number1++;
	}
}

int	main(void)
{
	ft_print_comb();
	return 0;
}
