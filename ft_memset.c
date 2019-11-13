/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlobos-m <dlobos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 20:27:14 by dlobos-m          #+#    #+#             */
/*   Updated: 2019/11/10 17:08:38 by dlobos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *str, int c, size_t len)
{
	size_t				i;
	unsigned char		*cad;

	i = 0;
	cad = (unsigned char*)str;
	while (i < len)
		cad[i++] = (unsigned char)c;
	return (cad);
}
