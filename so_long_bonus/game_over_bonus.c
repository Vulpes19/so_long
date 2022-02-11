/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_over_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:48:28 by abaioumy          #+#    #+#             */
/*   Updated: 2022/02/09 18:19:31 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_game_lost(t_win *win)
{
	mlx_clear_window(win->init, win->win);
	mlx_string_put
		(win->init, win->win, win->map_w / 2, win->map_h / 2,
			WHITE, "GAMEOVER");
	sleep(2);
}

void	ft_game_won(t_win *win)
{
	sleep(2);
	mlx_clear_window(win->init, win->win);
	while (win->y < win->map_h)
	{
		win->x = 0;
		while (win->x < win->map_w)
		{
			mlx_put_image_to_window
				(win->init, win->win,
				win->wall, win->x * 80, win->y * 80);
			sleep(2);
			win->x++;
		}
		win->y++;
	}
	mlx_string_put
		(win->init, win->win, win->map_w / 2, win->map_h / 2,
			WHITE, "GAMEOVER");
}
