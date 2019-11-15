/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlobos-m <dlobos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 18:48:43 by dlobos-m          #+#    #+#             */
/*   Updated: 2019/11/15 13:56:07 by dlobos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	if (n == 0)
		return (0);
	while (n > 0)
	{
		if (s1[i] == '\0' || s1[i] != s2[i])
			return ((unsigned char)s1[i] - s2[i]);
		i++;
		n--;
	}
	return ((unsigned char)s1[i] - s2[i]);
}
