/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlobos-m <dlobos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 15:06:10 by dlobos-m          #+#    #+#             */
/*   Updated: 2019/11/15 13:55:40 by dlobos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t y;
	size_t x;

	x = 0;
	i = 0;
	y = 0;
	while (dst[i] != '\0')
		i++;
	x = i;
	while (src[y] != '\0')
	{
		if ((x + 1) < size)
		{
			dst[x] = src[y];
		}
		x++;
		y++;
	}
	dst[x] = '\0';
	if (size < i)
		return (size + y);
	return (i + y);
}
