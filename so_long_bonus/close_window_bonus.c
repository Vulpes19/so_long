/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   close_window_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:43:29 by abaioumy          #+#    #+#             */
/*   Updated: 2022/02/17 14:48:24 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_not_ber_file(void)
{
	ft_printf("You must have one argument and the file must be .ber type");
	exit(0);
}

void	ft_close_window(t_win *map)
{
	mlx_hook(map->win, 17, 1L << 0, ft_close_x, map);
	mlx_hook(map->win, 2, 1L << 0, ft_close_esc, map);
}