/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:48:29 by valarcon          #+#    #+#             */
/*   Updated: 2022/01/21 12:51:58 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		k;
	char	*s2;
	char	*s1a;
	int		p;

	s1a = (char *)s1;
	k = 0;
	while (*(s1a + k))
		k++;
	s2 = malloc(sizeof(char) * (k + 1));
	if (s2 == '\0')
		return (0);
	p = k;
	while (k + 1 > 0)
	{
		*(s2 + k) = *(s1a + k);
		k--;
	}
	*(s2 + p) = '\0';
	return (s2);
}
