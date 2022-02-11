/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_up_down_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:19:15 by abaioumy          #+#    #+#             */
/*   Updated: 2022/02/09 17:55:19 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_exit_down(t_win *win)
{
	win->map_parser[win->player_y][win->player_x] = '0';
	win->map_parser[win->player_y + 1][win->player_x] = 'E';
	ft_game_won(win);
	exit(1);
}

void	ft_touch_enemy_down(t_win *win)
{
	win->map_parser[win->player_y][win->player_x] = '0';
	ft_game_won(win);
	exit(1);
}

void	ft_exit_up(t_win *win)
{
	win->map_parser[win->player_y][win->player_x] = '0';
	win->map_parser[win->player_y - 1][win->player_x] = 'E';
	ft_game_won(win);
	exit(1);
}

void	ft_touch_enemy_up(t_win *win)
{
	win->map_parser[win->player_y][win->player_x] = '0';
	ft_game_won(win);
	exit(1);
}
