/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/08/02 21:43:20 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/03 22:04:52 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_putnbr(int i)
{
	if (i == 2147483647)
		ft_putstr("2147483647");
	else if (i == -2147483648)
		ft_putstr("-2147483648");
	else
	{
		if (i < 0)
		{
			ft_putchar('-');
			ft_putnbr(-i);
		}
		else if (i >= 10)
		{
			ft_putnbr(i / 10);
			ft_putnbr(i % 10);
		}
		else
			ft_putchar('0' + i);
	}
}
