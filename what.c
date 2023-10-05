/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   what.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:13:09 by valarcon          #+#    #+#             */
/*   Updated: 2022/03/14 13:13:11 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_bonus.h"

int	args_at(char *arg, t_pipex *pipex)
{
	if (arg && !ft_strncmp("here_doc", arg, 9))
	{
		pipex->here_doc = 1;
		return (6);
	}
	else
	{
		pipex->here_doc = 0;
		return (5);
	}
}

void	ft_here_doc(char *argv, t_pipex *pipex)
{
	int		file;
	char	*buff;

	file = open(".heredoc_tmp", O_CREAT | O_WRONLY | O_TRUNC, 0000644);
	if (file < 0)
		ft_error(ERR_HEREDOC);
	while (5)
	{
		write(1, "heredoc> ", 9);
		buff = get_next_line(pipex->here_doc);
		if (!(buff))
			exit(1);
		if (ft_strlen(argv) == ft_strlen(buff) - 1 && !ft_strncmp(argv, buff, (ft_strlen(buff) - 1)))
			break ;
		write(file, buff, ft_strlen(buff));
		write(file, "\n", 1);
		free(buff);
	}
	free(buff);
	close(file);
	pipex->infile = open(".heredoc_tmp", O_RDONLY);
	if (pipex->infile < 0)
		unlink(".heredoc_tmp");
	if (pipex->infile < 0)
		perror_b(ERR_HEREDOC);
}
