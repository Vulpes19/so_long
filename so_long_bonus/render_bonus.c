/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:42:42 by abaioumy          #+#    #+#             */
/*   Updated: 2022/02/14 15:03:28 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	assign_texture(t_win *map)
{
	int	w;
	int	h;

	ft_right(map);
	ft_chicken(map);
	map->en = mlx_xpm_file_to_image(map->init, "./assets/hunter1.xpm", &w, &h);
	map->wall = mlx_xpm_file_to_image(map->init, "./assets/wall.xpm", &w, &h);
	map->grass = mlx_xpm_file_to_image(map->init, "./assets/grass.xpm", &w, &h);
	map->exit = mlx_xpm_file_to_image(map->init, "./assets/hole.xpm", &w, &h);
	ft_check_protection(map);
}

int	draw_map(t_win *map)
{
	mlx_clear_window(map->init, map->win);
	ft_frames_check(map);
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
	ft_steps(map);
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
	map->map_parser[map->map_h] = 0;
	assign_texture(map);
}
