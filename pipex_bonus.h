/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:56:18 by valarcon          #+#    #+#             */
/*   Updated: 2022/03/14 18:35:05 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_BONUS_H
# define PIPEX_BONUS_H
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <sys/wait.h>
# include <stdio.h>
# include <fcntl.h>
# include "./libft/libft.h"
# define ERR_INFILE "no such file or directory\n"
# define ERR_OUTFILE "permission denied\n"
# define ERR_INPUT "invalid number of arguments.\n"
# define ERR_PIPE "could not create pipe\n"
# define ERR_ENVP "PATH variable is not set\n"
# define ERR_CMD "command not found\n"
# define ERR_HEREDOC "no such file or directory\n"

typedef struct s_list
{
	int		infile;
	int		outfile;
	int		here_doc;
	int		*pipe;
	char	*env_path;
	char	*cmd;
	char	**cmd_paths;
	char	**cmd_args;
	int		cmd_nmb;
	int		pipe_nmb;
	int		idx;
	pid_t	pid;
}	t_pipex;

void	close_pipe(t_pipex *pipex);
int		args_at(char *arg, t_pipex *pipex);
void	ft_here_doc(char *argv, t_pipex *pipex);
void	freepipe(t_pipex *pipex);
void	freechild(t_pipex *pipex);
void	freeparent(t_pipex *pipex);
void	perror_b(char *err);
int		ft_error(char *err);
void	child(t_pipex p, char **argv, char **envp);
void	takeinfile(char **argv, t_pipex *pipex);
void	takeoutfile(char *argv, t_pipex *pipex);
char	*pathfinder(char **envp);
void	ft_bzero(void *s, size_t n);
int		ft_atoi(const char *str);
void	*ft_calloc(size_t count, size_t size);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
int		ft_strlen(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);
char	*ft_strrchr(char *s, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
int		ft_freenull(char *s);
char	*get_next_line(int fd);
#endif
