/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 10:00:12 by valarcon          #+#    #+#             */
/*   Updated: 2022/01/25 10:00:34 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	k;
	size_t	l;
	char	*res;
	size_t	n;

	res = (char *)str;
	k = 0;
	l = 0;
	if (*to_find == 0 || to_find == str)
		return (res);
	while (res[k] && k < len)
	{
		n = 0;
		while (res[k + n] && to_find[n] && res[k + n] == to_find[n]
			&& k + n < len)
			n++;
		if (to_find[n] == '\0')
			return (res + k);
		k++;
	}
	return (0);
}
