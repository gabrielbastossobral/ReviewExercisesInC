/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:07:32 by gabastos          #+#    #+#             */
/*   Updated: 2024/09/05 17:30:09 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	destlen;
	unsigned int	srclen;
	unsigned int	i;

	destlen = 0;
	srclen = 0;
	i = 0;
	while (dest[destlen])
		destlen++;
	while (src[srclen])
		srclen++;
	if (destlen >= size)
		return (size + srclen);
	while (src[i] && (destlen + i) < size - 1)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	if (destlen + i < size)
	{
		dest[destlen + i] = '\0';
	}
	return (destlen + srclen);
}

int main(void)
{
	char	dest[6] = "frase";
	char	src[6] = "legal";
	int result = ft_strlcat(dest, src, 8);
	printf("%d", result);
	return 0;
}
