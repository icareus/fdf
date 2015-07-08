/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/20 05:24:43 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/04 00:11:21 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*sub;
	size_t		i;

	i = 0;
	sub = malloc(sizeof(char) * len + 1);
	if (sub)
	{
		while (i < len)
		{
			sub[i] = s[start + i];
			i++;
		}
		sub[len] = '\0';
	}
	return (sub);
}
