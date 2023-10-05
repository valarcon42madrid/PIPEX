/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 11:33:15 by valarcon          #+#    #+#             */
/*   Updated: 2022/01/22 12:39:15 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*p;
	size_t				m;

	m = 0;
	p = dst;
	if (src == '\0' && dst == '\0')
		return (dst);
	while (m < n)
	{
		p[m] = *((unsigned char *)src + m);
		m++;
	}
	return (dst);
}
