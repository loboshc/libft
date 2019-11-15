/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlobos-m <dlobos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 17:11:01 by dlobos-m          #+#    #+#             */
/*   Updated: 2019/11/15 13:55:07 by dlobos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t					i;
	unsigned char			*cad;
	unsigned char			*cad1;

	cad = (unsigned char*)s1;
	cad1 = (unsigned char*)s2;
	i = 0;
	while (cad[i] == cad1[i] && ++i < n)
		;
	if (i == n)
		return (0);
	else
		return ((int)cad[i] - cad1[i]);
}
