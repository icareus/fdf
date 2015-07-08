/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/04 01:52:13 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/04 04:12:32 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*tmpl;
	t_list		*map;
	t_list		*tmpm;

	map = f(lst);
	tmpl = lst->next;
	tmpm = map;
	while (tmpl)
	{
		tmpm->next = f(tmpl);
		tmpl = tmpl->next;
	}
	return (map);
}
