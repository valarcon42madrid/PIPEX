/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:06:04 by valarcon          #+#    #+#             */
/*   Updated: 2022/03/14 18:45:39 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_bonus.h"

int	ft_error(char *err)
{
	write(2, err, ft_strlen(err));
	return (1);
}

void	perror_b(char *err)
{
	perror(err);
	exit (1);
}
