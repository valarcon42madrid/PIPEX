/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:39:05 by valarcon          #+#    #+#             */
/*   Updated: 2022/01/22 12:17:39 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*q;
	size_t	k;
	void	*p;

	k = 0;
	q = malloc(sizeof(char) * count * size);
	if (q == '\0')
		return (0);
	while (k < size * count)
	{
		*(q + k) = '\0';
		k++;
	}
	p = (void *)q;
	return (p);
}
