/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlobos-m <dlobos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 13:06:52 by dlobos-m          #+#    #+#             */
/*   Updated: 2019/11/20 17:21:00 by dlobos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t num, size_t tam)
{
	void	*pnt;

	pnt = malloc(num * tam);
	if (pnt == NULL)
		return (NULL);
	ft_bzero(pnt, num * tam);
	return (pnt);
}
