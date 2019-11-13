/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlobos-m <dlobos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 16:21:24 by dlobos-m          #+#    #+#             */
/*   Updated: 2019/11/13 16:26:45 by dlobos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int		i;
	char	*pnt;

	i = 0;
	while (s[i] != '\0')
		i++;
	i += 1;
	pnt = malloc(i * sizeof(char));
	if (pnt == NULL)
		return (NULL);
	while (i-- >= 0)
		pnt[i] = s[i];
	return (pnt);
}
