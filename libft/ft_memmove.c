/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 12:29:40 by valarcon          #+#    #+#             */
/*   Updated: 2022/01/24 09:39:46 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <string.h>
#include <stdio.h>*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	unsigned char		*s;
	size_t				k;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	k = 0;
	if (dst == '\0' && src == '\0')
		return (dst);
	while (dst < src && k < len)
	{
		*(d + k) = *(s + k);
		k++;
	}
	k = len;
	while (src <= dst && k > 0)
	{
		*(d + k - 1) = *(s + k - 1);
		k--;
	}
	dst = (void *)d;
	return (dst);
}

/*int	main()
{
	unsigned char	q[6] = "qwer";
	unsigned char	w[6] = "1234";
	size_t			e;
	unsigned char	*p;

	e = 7;
	p = ft_memmove(q, w, e);
	printf("%s\n", p);
}*/
