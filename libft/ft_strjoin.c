/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 12:12:27 by valarcon          #+#    #+#             */
/*   Updated: 2022/01/29 16:01:13 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		a;
	int		b;
	char	*ss;

	if (!s1 || !s2)
		return (NULL);
	a = ft_strlen(s1);
	b = a + ft_strlen(s2);
	ss = malloc(sizeof(char) * (b + 1));
	if (ss == 0)
		return (0);
	*(ss + b) = 0;
	while (b - a >= 0 && s2)
	{
		*(ss + b) = *(s2 + b - a);
		b--;
	}
	while (a > 0)
	{
		*(ss + a - 1) = *(s1 + a - 1);
		a--;
	}
	return (ss);
}
