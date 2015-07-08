/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/20 07:52:02 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/04 01:07:37 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				**ft_strsplit(const char *s, char c)
{
	char	**ret;
	int		wc;
	int		i;
	int		cursor;
	int		sublen;

	wc = ft_count_words(s, c);
	ret = malloc(sizeof(char *) * wc + 1);
	if (!s || !ret)
		return (NULL);
	i = 0;
	cursor = 0;
	while (i < wc)
	{
		sublen = 0;
		while (s[cursor] && s[cursor] == c)
			cursor++;
		while (s[cursor + sublen] && s[cursor + sublen] != c)
			sublen++;
		ret[i] = ft_strsub(s, cursor, sublen);
		cursor += sublen;
		i++;
	}
	ret[i] = NULL;
	return (ret);
}
