/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:24:36 by valarcon          #+#    #+#             */
/*   Updated: 2022/01/23 07:23:24 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	k;

	k = 0;
	while (k < n && *((unsigned char *)s1 + k) == *((unsigned char *)s2 + k))
		k++;
	if (k == n)
		return ((unsigned char)0);
	else
		return ((*((unsigned char *)s1 + k) - *((unsigned char *)s2 + k)));
}
