/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/10 15:47:26 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/03 22:12:42 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char		*new;

	if (!(new = (char *)malloc(sizeof(char) * size)))
		return (NULL);
	while (size)
	{
		size--;
		new[size] = '\0';
	}
	return (new);
}
