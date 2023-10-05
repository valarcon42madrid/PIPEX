/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:07:34 by valarcon          #+#    #+#             */
/*   Updated: 2022/03/15 11:57:00 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_bonus.h"

static void	do_pipes(t_pipex *pipex)
{
	int	i;

	i = 0;
	while (i < pipex->cmd_nmb - 1)
	{
		if (pipe(pipex->pipe + 2 * i) < 0)
			freeparent(pipex);
		i++;
	}
}

void	close_pipe(t_pipex *pipex)
{
	int	i;

	i = 0;
	while (i < pipex->pipe_nmb)
	{
		close(pipex->pipe[i]);
		i++;
	}
}

int	main(int argc, char *argv[], char *envp[])
{
	t_pipex	pipex;

	if (argc < args_at(argv[1], &pipex))
		return (ft_error(ERR_INPUT));
	takeinfile(argv, &pipex);
	takeoutfile(argv[argc - 1], &pipex);
	pipex.cmd_nmb = argc - 3 - pipex.here_doc;
	pipex.pipe_nmb = 2 * (pipex.cmd_nmb - 1);
	pipex.pipe = malloc(sizeof(int) * pipex.pipe_nmb);
	if (!pipex.pipe)
		perror_b(ERR_PIPE);
	pipex.env_path = pathfinder(envp);
	pipex.cmd_paths = ft_split(pipex.env_path, ':');
	if (!pipex.cmd_paths)
		freepipe(&pipex);
	do_pipes(&pipex);
	pipex.idx = -1;
	while (++(pipex.idx) < pipex.cmd_nmb)
		child(pipex, argv, envp);
	close_pipe(&pipex);
	waitpid(-1, NULL, 0);
	freeparent(&pipex);
	return (0);
}
