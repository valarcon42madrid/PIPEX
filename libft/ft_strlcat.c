/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 18:47:49 by valarcon          #+#    #+#             */
/*   Updated: 2022/01/29 17:36:15 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	m;
	size_t	si;
	size_t	a;
	char	*src2;

	a = 0;
	si = 0;
	m = 0;
	src2 = (char *)src;
	while (*(dest + a) && a < size)
		a++;
	while (*(src2 + m))
		m++;
	while (*(src2 + si) && a + si + 1 < size)
	{
		*(dest + a + si) = *(src2 + si);
		si++;
	}
	if (!(size == 0 || a + si >= size))
		*(dest + a + si) = '\0';
	if (a > size)
		a = size;
	return (a + m);
}
