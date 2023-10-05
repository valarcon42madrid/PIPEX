/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 11:38:25 by valarcon          #+#    #+#             */
/*   Updated: 2022/01/23 09:10:38 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	c;
	char	*src2;
	size_t	n;

	n = 0;
	c = 0;
	src2 = (char *)src;
	while (*(src2 + c) && c + 1 < size)
	{
		dest[c] = src2[c];
		c++;
	}
	c = 0;
	while (*(src2 + c) && *(dest + c) && c + 1 < size)
	{
		dest[c] = src2[c];
		c++;
	}
	if (size > 0)
		dest[c] = '\0';
	while (*(src2 + n))
		n++;
	return (n);
}

/*int	main()
{
	char	s[6] = "c0A";
	char	s2[5] = "11";
	char	s3[6] = "c0A";
	char	s4[5] = "11";
	unsigned int	f;
	unsigned int	k;
	unsigned int 	l;

	char src[] = "coucou";
	char dest[10]; memset(dest, 'A', 10);
	f = 2;
	//k = ft_strlcpy(s, s2, f);
	k = ft_strlcpy(dest, src, f);
	printf("Tu movida -> %s\tque devolvio%u\n", dest, k);
    char dest2[10]; memset(dest, 'A', 10);
	k = strlcpy(dest2, src, f);
	printf("La movida -> %s\tque devolvio%u\n", dest2, k);
	//printf("%s\n, %i\n", s3, l);
}*/
