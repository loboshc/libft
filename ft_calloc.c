/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlobos-m <dlobos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 13:06:52 by dlobos-m          #+#    #+#             */
/*   Updated: 2019/11/15 13:54:41 by dlobos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t num, size_t tam)
{
	size_t	i;
	void	*pnt;

	i = 0;
	pnt = malloc(num * tam);
	if (pnt == NULL)
		return (NULL);
	while (i <= (num * tam))
	{
		((char*)pnt)[i] = 0;
		i++;
	}
	return (pnt);
}
