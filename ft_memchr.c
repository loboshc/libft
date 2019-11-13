/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlobos-m <dlobos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 13:09:08 by dlobos-m          #+#    #+#             */
/*   Updated: 2019/11/10 16:35:10 by dlobos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	char		*cad;
	char		ch;

	cad = (char*)s;
	ch = (unsigned char)c;
	i = 0;
	while (++i < n && cad[i] != ch && cad[i] != '\0')
		;
	if (cad[i] == ch)
		return (cad + i);
	return (0);
}
