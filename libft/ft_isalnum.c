/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:04:14 by valarcon          #+#    #+#             */
/*   Updated: 2022/01/18 13:04:16 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (c < 91 && c > 64)
		return (1);
	else
	{
		if (c < 123 && c > 96)
			return (1);
		else
		{
			if (c < 58 && c > 47)
				return (1);
			else
				return (0);
		}
	}
}
