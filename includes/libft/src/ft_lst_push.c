/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 19:24:47 by lefebvre          #+#    #+#             */
/*   Updated: 2015/01/04 01:13:25 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lst_push(t_list *first, void *item)
{
	t_list		*tmp;

	if (!first)
	{
		first = malloc(sizeof(t_list));
		first->content = item;
		first->next = NULL;
	}
	else
	{
		tmp = first;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = malloc(sizeof(t_list));
		tmp->next->content = item;
		tmp->next->next = NULL;
	}
	return (first);
}
