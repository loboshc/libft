/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlobos-m <dlobos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 14:18:06 by dlobos-m          #+#    #+#             */
/*   Updated: 2019/11/19 20:00:13 by dlobos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*pnt;
	int		i;
	int		j;
	int		x;

	if (!(s1 && s2))
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	pnt = (char*)malloc((i + j + 1) * sizeof(*pnt));
	if (pnt == NULL)
		return (NULL);
	x = 0;
	while (*s1)
	{
		pnt[x] = *s1++;
		x++;
	}
	while (*s2)
	{
		pnt[x] = *s2++;
		x++;
	}
	pnt[x] = '\0';
	return (pnt);
}
