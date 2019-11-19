/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlobos-m <dlobos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 13:02:20 by dlobos-m          #+#    #+#             */
/*   Updated: 2019/11/19 19:41:14 by dlobos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*pnt;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	if (!(pnt = (char*)malloc((len + 1) * sizeof(char))))
		return (NULL);
	if (!(start > ft_strlen(s)))
	{
		while (j < len)
		{
			pnt[j] = s[i + start];
			i++;
			j++;
		}
	}
	pnt[j] = '\0';
	return (pnt);
}
