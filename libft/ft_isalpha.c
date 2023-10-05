/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:55:23 by valarcon          #+#    #+#             */
/*   Updated: 2022/01/18 12:55:28 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <ctype.h>
#include <stdio.h>*/

int	ft_isalpha(int c)
{
	if (c < 91 && c > 64)
		return (1);
	else
	{
		if (c < 123 && c > 96)
			return (1);
		else
			return (0);
	}
}

/*int	main ()
{
	int	k;
	int	c;
	int	n;

	n = 92;
	c = ft_isalpha(n);
	k = isalpha(n);
	printf("%i\n, %i\n", c, k);
}*/
