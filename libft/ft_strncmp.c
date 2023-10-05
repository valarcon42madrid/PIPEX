/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 11:49:09 by valarcon          #+#    #+#             */
/*   Updated: 2022/01/23 09:13:33 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	k;
	int		sa;

	sa = 0;
	k = 0;
	while (*(s1 + sa) == *(s2 + sa) && *(s1 + sa) && *(s2 + sa) && k < n)
	{
		sa++;
		k++;
	}
	if (k == n)
		return (0);
	else
		return ((int)(*((unsigned char *)s1 + sa)
			- *((unsigned char *)s2 + sa)));
}

/*int main(void)
{
	char s3[10] = "a6";
	char s4[10] = "a6s56";
	unsigned int	m = 4;
	int a;
	int b;
	a = ft_strncmp(s3, s4, m);
	b = strncmp(s3, s4, m);
	printf(" %d\n y %d\n ", a, b);
}*/
