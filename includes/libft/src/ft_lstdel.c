/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/04 01:33:40 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/04 04:11:24 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_lstdel(t_list **lst, void (*del)(void *, size_t))
{
	t_list		*tmp;

	if (!lst || !*lst || !del)
	{
		return ;
	}
	while (*lst)
	{
		tmp = (*lst)->next;
		del((*lst)->content, (*lst)->content_size);
		free (*lst);
		*lst = tmp;
	}
	*lst = NULL;
	lst = NULL;
}
