/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 16:31:03 by valarcon          #+#    #+#             */
/*   Updated: 2022/01/31 15:29:44 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free(char **s)
{
	int	i;

	i = 0;
	while (s)
	{
		while (s[i])
			i++;
		while (s[0])
		{
			free(s[i - 1]);
			i--;
		}
		free(s);
	}
	return (NULL);
}

static int	ft_strlen_c(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != 0 && *(s + i) != c)
		i++;
	return (i);
}

static int	ft_word_c(char const *s, char c)
{
	int	i;
	int	w;

	i = 0;
	w = 0;
	while (*(s + i))
	{
		while (*(s + i) && *(s + i) == c)
			i++;
		if (*(s + i) && *(s + i) != c && (i == 0 || *(s + i - 1) == c))
		{
			w++;
			while (*(s + i) && *(s + i) != c)
				i++;
		}
	}
	return (w);
}

static char	**ft_gestor(char c, char const *s, int a, int b)
{
	char	**split;
	int		i;

	split = malloc(sizeof(void *) * (a + 1));
	if (!split)
		return (ft_free(split));
	split[a] = (char *) '\0';
	while (b < a)
	{
		i = 0;
		while (*s && *s == c)
			s++;
		split[b] = malloc(sizeof(char) * (ft_strlen_c(s, c) + 1));
		if (!split[b])
			return (ft_free(split));
		while (*s && *s != c)
		{
			split[b][i] = *s;
			s++;
			i++;
		}
		split[b++][i] = '\0';
	}
	return (split);
}

char	**ft_split(char const *s, char c)
{
	int		a;
	int		b;
	char	**split;

	b = 0;
	if (!s)
	{
		split = malloc(sizeof(void *));
		*split = malloc(sizeof(char *));
		*split = (char *)0;
		return (split);
	}
	a = ft_word_c(s, c);
	split = ft_gestor(c, s, a, b);
	if (split == 0)
		return (0);
	return (split);
}
