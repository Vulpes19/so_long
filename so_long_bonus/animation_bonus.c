/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animation_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:41:45 by abaioumy          #+#    #+#             */
/*   Updated: 2022/02/14 15:19:26 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_chicken(t_win *map)
{
	map->coll2->chicken[0] = mlx_xpm_file_to_image
		(map->init, "./assets/chicken1.xpm", &map->w, &map->h);
	map->coll2->chicken[1] = mlx_xpm_file_to_image
		(map->init, "./assets/chicken1.xpm", &map->w, &map->h);
	map->coll2->chicken[2] = mlx_xpm_file_to_image
		(map->init, "./assets/chicken2.xpm", &map->w, &map->h);
	map->coll2->chicken[3] = mlx_xpm_file_to_image
		(map->init, "./assets/chicken2.xpm", &map->w, &map->h);
	map->coll2->chicken[4] = mlx_xpm_file_to_image
		(map->init, "./assets/chicken3.xpm", &map->w, &map->h);
	map->coll2->chicken[5] = mlx_xpm_file_to_image
		(map->init, "./assets/chicken3.xpm", &map->w, &map->h);
	map->coll2->chicken[6] = mlx_xpm_file_to_image
		(map->init, "./assets/chicken4.xpm", &map->w, &map->h);
	map->coll2->chicken[7] = mlx_xpm_file_to_image
		(map->init, "./assets/chicken4.xpm", &map->w, &map->h);
	map->coll2->chicken[8] = mlx_xpm_file_to_image
		(map->init, "./assets/chicken5.xpm", &map->w, &map->h);
	map->coll2->chicken[9] = mlx_xpm_file_to_image
		(map->init, "./assets/chicken6.xpm", &map->w, &map->h);
	ft_coll_protection(map);
}

void	ft_left(t_win *map)
{
	map->animation[0] = mlx_xpm_file_to_image
		(map->init, "./assets/foxx1.xpm", &map->w, &map->h);
	map->animation[1] = mlx_xpm_file_to_image
		(map->init, "./assets/foxx1.xpm", &map->w, &map->h);
	map->animation[2] = mlx_xpm_file_to_image
		(map->init, "./assets/foxx2.xpm", &map->w, &map->h);
	map->animation[3] = mlx_xpm_file_to_image
		(map->init, "./assets/foxx2.xpm", &map->w, &map->h);
	map->animation[4] = mlx_xpm_file_to_image
		(map->init, "./assets/foxx3.xpm", &map->w, &map->h);
	map->animation[5] = mlx_xpm_file_to_image
		(map->init, "./assets/foxx3.xpm", &map->w, &map->h);
	map->animation[6] = mlx_xpm_file_to_image
		(map->init, "./assets/foxx4.xpm", &map->w, &map->h);
	map->animation[7] = mlx_xpm_file_to_image
		(map->init, "./assets/foxx4.xpm", &map->w, &map->h);
	map->animation[8] = mlx_xpm_file_to_image
		(map->init, "./assets/foxx5.xpm", &map->w, &map->h);
	map->animation[9] = mlx_xpm_file_to_image
		(map->init, "./assets/foxx5.xpm", &map->w, &map->h);
	map->animation[10] = mlx_xpm_file_to_image
		(map->init, "./assets/foxx6.xpm", &map->w, &map->h);
	map->animation[11] = mlx_xpm_file_to_image
		(map->init, "./assets/foxx6.xpm", &map->w, &map->h);
	ft_player_protection(map);
}

void	ft_right(t_win *map)
{
	map->animation[0] = mlx_xpm_file_to_image
		(map->init, "./assets/fox1.xpm", &map->w, &map->h);
	map->animation[1] = mlx_xpm_file_to_image
		(map->init, "./assets/fox1.xpm", &map->w, &map->h);
	map->animation[2] = mlx_xpm_file_to_image
		(map->init, "./assets/fox2.xpm", &map->w, &map->h);
	map->animation[3] = mlx_xpm_file_to_image
		(map->init, "./assets/fox2.xpm", &map->w, &map->h);
	map->animation[4] = mlx_xpm_file_to_image
		(map->init, "./assets/fox3.xpm", &map->w, &map->h);
	map->animation[5] = mlx_xpm_file_to_image
		(map->init, "./assets/fox3.xpm", &map->w, &map->h);
	map->animation[6] = mlx_xpm_file_to_image
		(map->init, "./assets/fox4.xpm", &map->w, &map->h);
	map->animation[7] = mlx_xpm_file_to_image
		(map->init, "./assets/fox4.xpm", &map->w, &map->h);
	map->animation[8] = mlx_xpm_file_to_image
		(map->init, "./assets/fox5.xpm", &map->w, &map->h);
	map->animation[9] = mlx_xpm_file_to_image
		(map->init, "./assets/fox5.xpm", &map->w, &map->h);
	map->animation[10] = mlx_xpm_file_to_image
		(map->init, "./assets/fox6.xpm", &map->w, &map->h);
	map->animation[11] = mlx_xpm_file_to_image
		(map->init, "./assets/fox6.xpm", &map->w, &map->h);
	ft_player_protection(map);
}
