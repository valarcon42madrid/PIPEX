/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 13:59:50 by valarcon          #+#    #+#             */
/*   Updated: 2022/01/19 13:59:54 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <ctype.h>
#include <stdio.h>*/

int	ft_toupper(int c)
{
	if (c < 123 && c > 96)
		c = c - 32;
	return (c);
}

/*int	main()
{
	int a;
	int b;
	int d;

	a = 98;
	b = 98;
	d = toupper(a);
	printf("%i\n", d);
	d = ft_toupper(b);
    printf("%i\n", d);
}*/
