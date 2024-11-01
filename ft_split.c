/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgumusta <kgumusta@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:58:20 by kgumusta          #+#    #+#             */
/*   Updated: 2024/11/01 20:27:08 by kgumusta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	wordcounter(char const *s, char sep)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == sep)
			s++;
		if (*s)
		{
			count++;
			while (*s && *s != sep)
				s++;
		}
	}
	return (count);
}

static int	wordlen(char const *s, char sep)
{
	int	len;

	len = 0;
	while (s[len] != sep && s[len])
		len ++;
	return (len);
}

static	int	ft_free(char **splited, int i)
{
	while (i > 0)
		free(splited[--i]);
	free(splited);
	return (0);
}

char	**ft_split(char const *s, char sep)
{
	char	**splited;
	int		i;

	if (!s)
		return (0);
	splited = (char **)malloc(sizeof(char *) * (wordcounter(s, sep) + 1));
	if (!splited)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == sep)
			s ++;
		if (*s && *s != sep)
		{
			splited[i] = ft_substr(s, 0, wordlen(s, sep));
			if (!splited[i])
				if (!ft_free(splited, i))
					return (0);
			s += wordlen(s, sep);
			i ++;
		}
	}
	splited[i] = 0;
	return (splited);
}
