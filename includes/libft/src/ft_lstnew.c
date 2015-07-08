/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/04 01:16:41 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/04 02:35:46 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*new;

	if (!(new = malloc(sizeof(t_list))))
		return (NULL);
	new->content = content ? ft_memdup((void *)content, content_size) : NULL;
	new->content_size = new->content ? content_size : 0;
	new->next = NULL;
	return (new);
}
