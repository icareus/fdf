/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_octant_1_4.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/08 02:20:12 by abarbaro          #+#    #+#             */
/*   Updated: 2015/07/08 02:20:13 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libmlx.h>

void octant_1(t_box *b, t_env *c)
{
	int dx;
	int dy;
	int e;

	dx = b->x2 - b->x1;
	dy = b->y2 - b->y1;
	e = dx;
	dx = e * 2;
	dy = dy * 2;
	while (b->x1 != b->x2)
	{
		mlx_pixel_wput(c, b->x1, b->y1);
		e = e - dy;
		if (e < 0)
		{
			b->y1++;
			e = e + dx;
		}
		b->x1++;
	}
}

void octant_2(t_box *b, t_env *c)
{
	int dx;
	int dy;
	int e;

	dx = b->x2 - b->x1;
	dy = b->y2 - b->y1;
	e = dy;
	dy = e * 2;
	dx = dx * 2;
	while (b->y1 != b->y2)
	{
		mlx_pixel_wput(c, b->x1, b->y1);
		e = e - dx;
		if (e < 0)
		{
			b->x1++;
			e = e + dy;
		}
		b->y1++;
	}
}

void octant_3(t_box *b, t_env *c)
{
	int dx;
	int dy;
	int e;

	dx = b->x2 - b->x1;
	dy = b->y2 - b->y1;
	e = dy;
	dy = e * 2;
	dx = dx * 2;
	while (b->y1 != b->y2)
	{
		mlx_pixel_wput(c, b->x1, b->y1);
		e = e + dx;
		if (e <= 0)
		{
			b->x1--;
			e = e + dy;
		}
		b->y1++;
	}
}

void octant_4(t_box *b, t_env *c)
{
	int dx;
	int dy;
	int e;

	dx = b->x2 - b->x1;
	dy = b->y2 - b->y1;
	e = dx;
	dx = e * 2;
	dy = dy * 2;
	while (b->x1 != b->x2)
	{
		mlx_pixel_wput(c, b->x1, b->y1);
		e = e + dy;
		if (e >= 0)
		{
			b->y1++;
			e = e + dx;
		}
		b->x1--;
	}
}
