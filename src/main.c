/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/08 02:19:24 by abarbaro          #+#    #+#             */
/*   Updated: 2015/07/08 02:19:25 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libmlx.h>

int			main(int ac, char **av)
{
	t_map *map;
	t_env *c;

	if (ac == 1)
		exit(0);
	c = (t_env *)malloc(sizeof(t_env));
	map = (t_map *)malloc(sizeof(t_map));
	c->off = XCENTER;
	c->off2 = YCENTER;
	c->zoom = 42;
	c->zh = 1;
	c->rot = 0;
	c->roty = M_PI / 2;
	map->av = av;
	c->coord = ft_get_coord(map);
	ft_mlx(c);
	return (0);
}
