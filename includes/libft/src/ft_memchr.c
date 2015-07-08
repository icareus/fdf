/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 21:37:45 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/03 19:48:01 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*ptr;
	unsigned char		chr;

	if (!s)
		return (NULL);
	chr = (unsigned char)c;
	ptr = (unsigned char *)s;
	while (s + n - (void *)ptr)
	{
		if (*ptr == chr)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
