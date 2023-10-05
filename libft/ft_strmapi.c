/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 14:27:05 by valarcon          #+#    #+#             */
/*   Updated: 2022/01/29 14:27:38 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	size;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	res = malloc(sizeof(char) * (size + 1));
	if (!res)
		return (0);
	*(res + size) = '\0';
	while (size > 0)
	{
		*(res + size - 1) = ((*f)((size - 1), *(s + size - 1)));
		size--;
	}
	return (res);
}
