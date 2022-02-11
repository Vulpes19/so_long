/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_right_norme_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:24:57 by abaioumy          #+#    #+#             */
/*   Updated: 2022/02/11 18:22:51 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_exit_right(t_win *win)
{
	win->map_parser[win->player_y][win->player_x] = '0';
	win->map_parser[win->player_y][win->player_x + 1] = 'E';
	ft_printf("YOU WIN :D\n");
	exit(1);
}

void	ft_touch_enemy_right(t_win *win)
{
	win->map_parser[win->player_y][win->player_x] = '0';
	ft_printf("YOU LOSE :(\n");
	exit(1);
}

void	ft_touch_coll_right(t_win *win)
{
	ft_right(win);
	win->map_parser[win->player_y][win->player_x] = '0';
	win->map_parser[win->player_y][win->player_x + 1] = 'P';
	win->player_x += 1;
	win->coll_num -= 1;
	win->steps_counter += 1;
}
