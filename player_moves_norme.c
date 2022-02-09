/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_moves_norme.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:08:38 by abaioumy          #+#    #+#             */
/*   Updated: 2022/02/09 16:37:50 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_exit_up(t_win *win)
{
	win->map_parser[win->player_y][win->player_x] = '0';
	win->map_parser[win->player_y - 1][win->player_x] = 'E';
	ft_printf("YOU WIN\n");
	exit(1);
}

void	ft_exit_down(t_win *win)
{
	win->map_parser[win->player_y][win->player_x] = '0';
	win->map_parser[win->player_y + 1][win->player_x] = 'E';
	ft_printf("YOU WIN\n");
	exit(1);
}

void	ft_exit_right(t_win *win)
{
	win->map_parser[win->player_y][win->player_x] = '0';
	win->map_parser[win->player_y][win->player_x + 1] = 'E';
	ft_printf("YOU WIN\n");
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
