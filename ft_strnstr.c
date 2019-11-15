/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlobos-m <dlobos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 13:29:07 by dlobos-m          #+#    #+#             */
/*   Updated: 2019/11/15 13:56:12 by dlobos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *dst, const char *src, size_t len)
{
	size_t				i;
	size_t				y;
	unsigned const char *cad1;
	unsigned const char *cad2;

	i = 0;
	cad1 = (unsigned const char*)dst;
	cad2 = (unsigned const char*)src;
	if (cad2[0] == '\0')
		return ((char*)cad1);
	while (cad1[i] != '\0' && i < len)
	{
		y = 0;
		while (cad1[i + y] == cad2[y])
		{
			if ((i + y + 1) > len)
				return (0);
			if (cad2[y + 1] == '\0')
				return ((char*)cad1 + i);
			y++;
		}
		i++;
	}
	return (0);
}
