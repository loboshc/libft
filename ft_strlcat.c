/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlobos-m <dlobos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 15:06:10 by dlobos-m          #+#    #+#             */
/*   Updated: 2019/11/19 14:39:56 by dlobos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t y;

	i = 0;
	y = 0;
	while (dst[i] && i < size)
		i++;
	while (src[y] && (y + i + 1) < size)
	{
		dst[i + y] = src[y];
		y++;
	}
	if (i < size)
		dst[i + y] = '\0';
	return (i + ft_strlen(src));
}
