/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/04 01:42:59 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/04 02:16:52 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *))
{
	t_list		*tmp;

	tmp = lst->next;
	while (lst)
	{
		f(lst);
		lst = tmp;
		tmp = tmp ? tmp->next : NULL;
	}
}
