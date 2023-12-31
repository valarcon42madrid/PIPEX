/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 14:10:41 by valarcon          #+#    #+#             */
/*   Updated: 2022/01/24 10:10:20 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		a;
	char	*b;

	a = 0;
	while (*(s + a) && *(s + a) != (char)c)
		a++;
	b = (char *)s + a;
	if ((char)c == *(s + a))
		return (b);
	else
		return (0);
}
