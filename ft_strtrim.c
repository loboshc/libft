/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlobos-m <dlobos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 16:19:24 by dlobos-m          #+#    #+#             */
/*   Updated: 2019/11/15 17:00:31 by dlobos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		find_fpos(char const *s1, char const *set)
{
	int i;
	int j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j] && s1[i] != set[j])
			j++;
		if (set[j] == '\0')
			return (i);
		i++;
	}
	return (0);
}

int		find_lpos(char const *s1, char const *set)
{
	int i;
	int j;

	i = ft_strlen(s1) - 1;
	while (i >= 0)
	{
		j = 0;
		while (set[j] && s1[i] != set[j])
			j++;
		if (set[j] == '\0')
			return (i);
		i--;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		p1;
	int		p2;
	char	*pnt;
	int		x;
	int		j;

	if (!(s1) || !(set))
		return (NULL);
	x = 0;
	p1 = find_fpos(s1, set);
	p2 = find_lpos(s1, set);
	j = ((p2 - p1) + 1);
	pnt = (char*)malloc((j + 1) * sizeof(char));
	if (j == 1)
	{
		pnt[x] = '\0';
		return (pnt);
	}
	if (pnt == NULL)
		return (NULL);
	while (x < j)
		pnt[x++] = s1[p1++];
	pnt[x] = '\0';
	return (pnt);
}
