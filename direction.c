/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   direction.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:36:41 by abaioumy          #+#    #+#             */
/*   Updated: 2022/02/14 14:44:15 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_right(t_win *map)
{
	int	w;
	int	h;

	map->player = mlx_xpm_file_to_image(map->init, "./assets/fox1.xpm", &w, &h);
	if (!map->player)
	{
		ft_printf("The player file doesn't exist.");
		exit(0);
	}
}

void	ft_left(t_win *map)
{
	int	w;
	int	h;

	map->player = mlx_xpm_file_to_image
		(map->init, "./assets/foxx1.xpm", &w, &h);
	if (!map->player)
	{
		ft_printf("The player file doesn't exist.");
		exit(0);
	}
}
