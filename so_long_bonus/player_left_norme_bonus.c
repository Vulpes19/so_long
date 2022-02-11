/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_left_norme_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:37:50 by abaioumy          #+#    #+#             */
/*   Updated: 2022/02/10 13:21:43 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_exit_left(t_win *win)
{
	win->map_parser[win->player_y][win->player_x] = '0';
	win->map_parser[win->player_y][win->player_x - 1] = 'E';
	ft_printf("YOU WIN\n");
	exit(1);
}

void	ft_touch_enemy_left(t_win *win)
{
	win->map_parser[win->player_y][win->player_x] = '0';
	ft_printf("YOU LOSE\n");
	exit(1);
}

void	ft_touch_coll_left(t_win *win)
{
	ft_left(win);
	win->map_parser[win->player_y][win->player_x] = '0';
	win->map_parser[win->player_y][win->player_x - 1] = 'P';
	win->player_x -= 1;
	win->coll_num -= 1;
	win->steps_counter += 1;
}
