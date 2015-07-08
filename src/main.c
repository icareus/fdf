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

void		pebkac(int i)
{
	if (!i)
	{
		ft_printf("Usage : ./fdf <mapfile.fdf>\n");
		exit (0);
	}
	else
	{
		ft_printf("%s\n%s\n%s\n%s\n", 
			"WASD : rotations",  
			"UDLR : translate", 
			"-/= : Zoom",
			"</> : DeltaZ");
	}
}

int			main(int ac, char **av)
{
	t_map *map;
	t_env *c;

	if (ac == 1)
		pebkac(0);
	pebkac(1);
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
