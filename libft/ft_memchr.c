/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:12:53 by valarcon          #+#    #+#             */
/*   Updated: 2022/01/25 13:47:28 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			k;
	unsigned char	*b;
	void			*res;
	unsigned char	z;

	k = 0;
	b = (unsigned char *)s;
	z = (unsigned char)c;
	while (k < n)
	{
		if (*(b + k) == z)
		{
			res = (void *)s + k;
			return (res);
		}
		k++;
	}
	return (0);
}
