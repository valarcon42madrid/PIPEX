/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 10:09:35 by valarcon          #+#    #+#             */
/*   Updated: 2022/01/25 15:01:15 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_char(char c, char const *set)
{
	int	j;

	j = 0;
	while (*(set + j) != '\0')
	{
		if (*(set + j) == c)
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	k;
	size_t	q;
	char	*sres;
	size_t	c;

	if (!s1)
		return (NULL);
	k = 0;
	q = 0;
	c = ft_strlen(s1);
	while (*(s1 + k) != '\0' && ft_char(s1[k], set))
		k++;
	while (c > k && ft_char(s1[c - 1], set))
		c--;
	sres = malloc(sizeof(char) * (c - k + 1));
	if (!sres)
		return (0);
	while (q < c - k)
	{
		*(sres + q) = *(s1 + q + k);
		q++;
	}
	sres[q] = '\0';
	return (sres);
}
