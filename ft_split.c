/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlobos-m <dlobos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 15:21:52 by dlobos-m          #+#    #+#             */
/*   Updated: 2019/11/20 15:22:03 by dlobos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	wordcount(const char *s, char c, size_t slen)
{
	size_t		words;
	size_t		i;

	if (slen == 0)
		return (0);
	words = 1;
	i = 0;
	while (i < slen)
	{
		if (s[i] == c)
		{
			words++;
			while (s[i] == c)
				i++;
		}
		else
			i++;
	}
	return (words);
}

static char		**getword(char const *s, char c, size_t slen, size_t wcount)
{
	char		**result;
	char		**res;
	size_t		ini;
	size_t		end;

	ini = 0;
	end = 0;
	if (!(result = (char **)malloc(sizeof(char *) * (wcount + 1))))
		return (NULL);
	res = result;
	while (end < slen)
		if (s[end] == c || end + 1 == slen)
		{
			end = (end + 1 == slen ? slen : end);
			if (!(*result = ft_substr(s, ini, (end - ini))))
				return (NULL);
			result++;
			while (s[end] == c)
				end++;
			ini = end;
		}
		else
			end++;
	*result = NULL;
	return (res);
}

char			**ft_split(char const *s, char c)
{
	size_t		j;
	size_t		i;
	char		**result;

	s = ft_strtrim(s, &c);
	if (!s)
		return (NULL);
	j = ft_strlen(s);
	i = wordcount(s, c, j);
	result = getword(s, c, j, i);
	return (result);
}
