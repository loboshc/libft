/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlobos-m <dlobos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 16:03:37 by dlobos-m          #+#    #+#             */
/*   Updated: 2019/11/18 19:55:04 by dlobos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*cad;
	char	car;

	i = 0;
	cad = (char*)s;
	car = (char)c;
	while (cad[i] != '\0')
		i++;
	while (cad[i] != car && i > 0)
		i--;
	if (cad[i] == car)
		return (cad + i);
	return (NULL);
}
