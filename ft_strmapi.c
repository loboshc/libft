/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlobos-m <dlobos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 16:24:31 by dlobos-m          #+#    #+#             */
/*   Updated: 2019/11/18 16:53:11 by dlobos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*pnt;
	int				j;

	if (!(s) || !(f))
		return (NULL);
	j = 0;
	i = ft_strlen((char*)s) + 1;
	if (!(pnt = (char*)malloc(sizeof(char) * i)))
		return (NULL);
	pnt[i] = '\0';
	while (s[j])
	{
		pnt[j] = f(j, s[j]);
		j++;
	}
	pnt[j] = '\0';
	return (pnt);
}
