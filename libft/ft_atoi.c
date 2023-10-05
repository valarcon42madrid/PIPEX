/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 09:00:16 by valarcon          #+#    #+#             */
/*   Updated: 2022/01/29 14:25:25 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int				si[2];
	unsigned long	ret;

	si[0] = 0;
	si[1] = 1;
	ret = 0;
	while ((str[si[0]] >= '\t' && str[si[0]] <= '\r') || (str[si[0]] == ' ')
		|| (str[si[0]] == '\f') || (str[si[0]] == '\n') || str[si[0]] == '\v')
		si[0]++;
	if (str[si[0]] == '+' || str[si[0]] == '-')
	{
		if (str[si[0]] == '-')
			si[1] *= -1;
		si[0]++;
	}
	while (str[si[0]] >= '0' && str[si[0]] <= '9')
	{
		ret = (ret * 10) + (unsigned long)((str[si[0]] - 48));
		si[0]++;
	}
	if (ret > (unsigned long)9223372036854775807 && si[1] < 0)
		return (0);
	else if (ret > (unsigned long)9223372036854775807 && si[1] > 0)
		return (-1);
	return ((ret * si[1]));
}
