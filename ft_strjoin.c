/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlobos-m <dlobos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 14:18:06 by dlobos-m          #+#    #+#             */
/*   Updated: 2019/11/14 15:52:42 by dlobos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*pnt;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!(s1 && s2))
		return (NULL);
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	pnt = (char*)malloc((i + j) * sizeof(char));
	if (pnt == NULL)
		return (NULL);
	while (j-- >= 0)
		pnt[i + j] = s2[j];
	while (i-- >= 0)
		pnt[i] = s1[i];
	return (pnt);
}
