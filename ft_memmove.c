/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlobos-m <dlobos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 12:40:27 by dlobos-m          #+#    #+#             */
/*   Updated: 2019/11/13 16:38:33 by dlobos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*cad1;
	char		*cad2;

	cad1 = (char*)dst;
	cad2 = (char*)src;
	i = 0;
	if (cad1 == NULL && cad2 == NULL)
		return (dst);
	if (src > dst)
	{
		while (i < len)
		{
			cad1[i] = cad2[i];
			i++;
		}
	}
	else if (src < dst)
	{
		i = len;
		while (i-- > 0)
			cad1[i] = cad2[i];
	}
	return (dst);
}
