/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/04 01:31:19 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/04 03:21:17 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_lstdelone(t_list **lst, void (*del)(void *, size_t))
{
	t_list		*tmp;

	if (!lst || !*lst || !del)
		return ;
	tmp = *lst;
	del(tmp->content, tmp->content_size);
	free(*lst);
	*lst = NULL;
}
