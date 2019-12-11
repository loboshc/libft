/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlobos-m <dlobos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 12:58:55 by dlobos-m          #+#    #+#             */
/*   Updated: 2019/11/20 13:22:04 by dlobos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lista;

	if (!(lista = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (!(content))
	{
		lista->content = NULL;
	}
	else
	{
		if (!(lista->content = malloc(sizeof(content))))
			return (NULL);
		lista->content = content;
	}
	lista->next = NULL;
	return (lista);
}
