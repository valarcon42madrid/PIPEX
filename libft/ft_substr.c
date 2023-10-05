/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 11:56:54 by valarcon          #+#    #+#             */
/*   Updated: 2022/01/31 15:22:29 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	unsigned int	k;
	char			*s2;

	k = 0;
	if (!s)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
	{
		s2 = malloc(sizeof(char));
		s2[0] = 0;
		return (s2);
	}
	if (ft_strlen(s) < (int)len)
		len = (size_t)ft_strlen(s);
	s2 = malloc(sizeof(char) * (len + 1));
	if (s2 == '\0')
		return (0);
	while (len > k && (*(s + start + k)))
	{
		*(s2 + k) = *((unsigned char *)s + start + k);
		k++;
	}
	*(s2 + k) = '\0';
	return (s2);
}
