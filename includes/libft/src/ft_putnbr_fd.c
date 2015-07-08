/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/03 21:49:10 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/03 22:06:55 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_putnbr_fd(int i, int fd)
{
	if (i == 2147483647)
		ft_putstr_fd("2147483647", fd);
	else if (i == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (i < 0)
		{
			ft_putchar_fd('-', fd);
			ft_putnbr_fd(-i, fd);
		}
		else if (i >= 10)
		{
			ft_putnbr_fd(i / 10, fd);
			ft_putnbr_fd(i % 10, fd);
		}
		else
			ft_putchar_fd('0' + i, fd);
	}
}
