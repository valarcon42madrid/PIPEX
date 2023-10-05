/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 14:35:19 by valarcon          #+#    #+#             */
/*   Updated: 2022/01/29 14:38:43 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int		i;
	char	n;

	n = '\n';
	if (s)
	{
		i = 0;
		while (*(s + i))
		{
			write(fd, &*(s + i), 1);
			i++;
		}
		write(fd, &n, 1);
	}
}