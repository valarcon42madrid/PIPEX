/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   childcreator.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:05:43 by valarcon          #+#    #+#             */
/*   Updated: 2022/03/15 12:10:54 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_bonus.h"

static char	*get_cmd(char **paths, char *cmd)
{
	char	*tmp;
	char	*command;

	while (*paths)
	{
		tmp = ft_strjoin(*paths, "/");
		command = ft_strjoin(tmp, cmd);
		free(tmp);
		if (access(command, 0) == 0)
			return (command);
		free(command);
		paths++;
	}
	return (NULL);
}

static void	auxdup(int z, int a)
{
	dup2(z, 0);
	dup2(a, 1);
}

static char	*ft_noenvp(char **envp)
{
	char	*aux[1];

	aux[0]
		= "SSH_AUTH_SOCK=/private/tmp/com.apple.launchd.zijxYCmu3B/Listeners";
	if (!envp)
		return (*aux);
	else
		return (*envp);
}

void	child(t_pipex p, char **argv, char **envp)
{
	p.pid = fork();
	if (!p.pid)
	{
		if (p.idx == 0)
			auxdup(p.infile, p.pipe[1]);
		else if (p.idx == p.cmd_nmb - 1)
			auxdup(p.pipe[2 * p.idx - 2], p.outfile);
		else
			auxdup(p.pipe[2 * p.idx - 2], p.pipe[2 * p.idx + 1]);
		close_pipe(&p);
		p.cmd_args = ft_split(argv[2 + p.here_doc + p.idx], ' ');
		p.cmd = get_cmd(p.cmd_paths, p.cmd_args[0]);
		if (!p.cmd)
		{
			write(2, ERR_CMD, ft_strlen(ERR_CMD));
			write(2, &(*p.cmd_args), ft_strlen((*p.cmd_args)));
			write(2, "\n", 1);
			freechild(&p);
			exit(1);
		}
		*envp = ft_noenvp(envp);
		execve(p.cmd, p.cmd_args, envp);
	}
}
