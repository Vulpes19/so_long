/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_image.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:06:30 by abaioumy          #+#    #+#             */
/*   Updated: 2022/02/09 16:26:59 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_put_image_to_window(t_win *map, char c)
{
	if (c == '1')
		mlx_put_image_to_window
			(map->init, map->win, map->wall, map->x * 80, map->y * 80);
	else if (c == '0')
		mlx_put_image_to_window
			(map->init, map->win, map->grass, map->x * 80, map->y * 80);
	else if (c == 'C')
		mlx_put_image_to_window
			(map->init, map->win, map->coll,
				map->x * 80, map->y * 80);
	else if (c == 'P')
		mlx_put_image_to_window(map->init, map->win,
			map->player, map->x * 80, map->y * 80);
	else if (c == 'E')
		mlx_put_image_to_window
					(map->init, map->win, map->exit, map->x * 80, map->y * 80);
	else
		return ;
}

void	ft_check_image(t_win *map)
{
	if (map->map_parser[map->y][map->x] == '1')
		ft_put_image_to_window(map, '1');
	if (map->map_parser[map->y][map->x] == '0')
		ft_put_image_to_window(map, '0');
	if (map->map_parser[map->y][map->x] == 'C')
		ft_put_image_to_window(map, 'C');
	if (map->map_parser[map->y][map->x] == 'P')
	{
		ft_put_image_to_window(map, 'P');
		map->player_x = map->x;
		map->player_y = map->y;
	}
	if (map->map_parser[map->y][map->x] == 'E')
		ft_put_image_to_window(map, 'E');
}
