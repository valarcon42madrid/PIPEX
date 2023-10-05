/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 09:56:38 by valarcon          #+#    #+#             */
/*   Updated: 2022/01/29 14:33:58 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static long int	ft_buf(long cpy, char **res, long size)
{
	if (size == 0)
	{
		while (cpy != 0)
		{
			size++;
			cpy = cpy / 10;
		}
	}
	else
	{
		while (cpy != 0)
		{
			size--;
			*(*res + size) = (char)((cpy % 10) + 48);
			cpy = cpy / 10;
		}
	}
	return (size);
}

char	*ft_itoa(int n)
{
	long	size;
	long	cpy;
	char	*res;

	cpy = (long)n;
	size = 0;
	size = ft_buf(cpy, (char **) '\0', size);
	if (n <= 0)
		size++;
	res = malloc(sizeof(char) * (size + 1));
	if (res == '\0')
		return (0);
	*(res + size) = '\0';
	cpy = (long)n;
	if (n < 0)
	{
		*(res) = '-';
		cpy = cpy * (-1);
	}
	if (cpy == 0)
		*(res) = (char)48;
	size = ft_buf(cpy, &res, size);
	return (res);
}
