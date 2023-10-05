/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 14:30:12 by valarcon          #+#    #+#             */
/*   Updated: 2022/01/24 10:11:27 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		a;
	char	*s2;

	a = 0;
	s2 = (char *)s;
	while (*(s + a))
		a++;
	while (*(s + a) != (char)c && a > 0)
		a--;
	if (*(s + a) != (char)c)
		return (0);
	else
	{
		s2 = s2 + a;
		return (s2);
	}
}
