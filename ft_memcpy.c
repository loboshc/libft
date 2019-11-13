/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlobos-m <dlobos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:20:16 by dlobos-m          #+#    #+#             */
/*   Updated: 2019/11/10 17:38:18 by dlobos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	size_t				i;
	unsigned char		*cad1;
	unsigned char		*cad2;

	cad1 = (unsigned char*)str1;
	cad2 = (unsigned char*)str2;
	i = 0;
	while (i < n && (cad1 != NULL || cad2 != NULL))
	{
		cad1[i] = cad2[i];
		i++;
	}
	return (cad1);
}
