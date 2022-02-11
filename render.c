/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 18:55:01 by abaioumy          #+#    #+#             */
/*   Updated: 2022/02/11 17:13:18 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	assign_texture(t_win *map)
{
	int	w;
	int	h;

	ft_right(map);
	map->coll = mlx_xpm_file_to_image
		(map->init, "./assets/chicken1.xpm", &w, &h);
	map->wall = mlx_xpm_file_to_image(map->init, "./assets/wall.xpm", &w, &h);
	map->grass = mlx_xpm_file_to_image(map->init, "./assets/grass.xpm", &w, &h);
	map->exit = mlx_xpm_file_to_image(map->init, "./assets/hole.xpm", &w, &h);
}

int	draw_map(t_win *map)
{
	mlx_clear_window(map->init, map->win);
	map->y = 0;
	while (map->y < map->map_h)
	{
		map->x = 0;
		while (map->x < map->map_w)
		{
			ft_check_image(map);
			map->x++;
		}
		map->y++;
	}
	return (0);
}

void	render(t_win *map, char *s)
{
	int	fd;

	fd = get_fd(s);
	map->y = 0;
	map->map_parser = malloc(sizeof(char *) * map->map_h + 1);
	while (map->y <= map->map_h)
	{
		map->map_parser[map->y] = get_next_line(fd);
		map->y += 1;
	}
	map->map_parser[map->y] = 0;
	assign_texture(map);
}
