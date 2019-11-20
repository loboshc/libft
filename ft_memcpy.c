/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlobos-m <dlobos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:20:16 by dlobos-m          #+#    #+#             */
/*   Updated: 2019/11/20 17:53:42 by dlobos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	unsigned char		*cad1;
	unsigned char		*cad2;

	cad1 = (unsigned char*)str1;
	cad2 = (unsigned char*)str2;
	if (!n || str1 == str2)
		return (str1);
	while (n--)
		*cad1++ = *cad2++;
	return (str1);
}
