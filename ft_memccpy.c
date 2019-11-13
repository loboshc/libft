/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlobos-m <dlobos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 19:34:38 by dlobos-m          #+#    #+#             */
/*   Updated: 2019/11/11 18:00:42 by dlobos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memccpy(void *str1, const void *str2, int c, size_t n)
{
	size_t				i;
	unsigned char		*cad1;
	unsigned char		*cad2;

	cad1 = (unsigned char*)str1;
	cad2 = (unsigned char*)str2;
	i = 0;
	while (i < n)
	{
		if (cad2[i] == (unsigned char)c)
		{
			cad1[i] = cad2[i];
			return (cad1 + i + 1);
		}
		cad1[i] = cad2[i];
		i++;
	}
	return (0);
}
