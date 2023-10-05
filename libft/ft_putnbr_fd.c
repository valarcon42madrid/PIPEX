/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:03:42 by valarcon          #+#    #+#             */
/*   Updated: 2022/01/26 16:03:44 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char		ch;
	long int	cpyn;
	long int	cr;

	cpyn = (long int)n;
	ch = '-';
	if (cpyn < 0)
	{
		write (fd, &ch, 1);
		cpyn = cpyn * (-1);
	}
	if (cpyn == 0)
	{
		ch = '0';
		write (fd, &ch, 1);
	}
	if (cpyn != 0)
	{
		cr = cpyn % 10;
		cpyn = cpyn / 10;
		if (cpyn != 0)
			ft_putnbr_fd((int)cpyn, fd);
		ch = (char)(cr + '0');
		write (fd, &ch, 1);
	}
}
