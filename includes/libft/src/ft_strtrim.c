/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/20 06:26:05 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/04 00:57:53 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char		*trim;
	size_t		prelen;
	size_t		postlen;
	size_t		len;

	if (!s)
		return (NULL);
	len = 0;
	prelen = 0;
	postlen = 0;
	while (s[len] && ft_strchr(" \t\n", s[len]))
		len++;
	prelen = len;
	while (s[len])
	{
		if (ft_strchr(" \t\n", s[len]))
			postlen++;
		else if (!ft_strchr(" \t\n", s[len]))
			postlen = 0;
		len++;
	}
	trim = ft_strsub(s, prelen, len - postlen - prelen);
	len = -1;
	return (trim);
}
