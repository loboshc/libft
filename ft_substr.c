/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlobos-m <dlobos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 13:02:20 by dlobos-m          #+#    #+#             */
/*   Updated: 2019/11/14 14:07:43 by dlobos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*pnt;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	pnt = (char*)malloc((len + 1) * sizeof(char));
	if (pnt == NULL)
		return (NULL);
	if (start != 0)
		i = start;
	while (j < len)
	{
		pnt[j] = s[i];
		i++;
		j++;
	}
	pnt[j] = '\0';
	return (pnt);
}
