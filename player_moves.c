/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_moves.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 19:31:37 by abaioumy          #+#    #+#             */
/*   Updated: 2022/02/09 16:16:27 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_move_player_down(t_win *win)
{
	if (win->map_parser[win->player_y + 1][win->player_x] == '0')
	{
		win->map_parser[win->player_y][win->player_x] = '0';
		win->map_parser[win->player_y + 1][win->player_x] = 'P';
		win->player_y += 1;
		win->steps_counter += 1;
		ft_printf("%d\n", win->steps_counter);
		return ;
	}
	if (win->map_parser[win->player_y + 1][win->player_x] == 'C')
	{
		win->map_parser[win->player_y][win->player_x] = '0';
		win->map_parser[win->player_y + 1][win->player_x] = 'P';
		win->player_y += 1;
		win->coll_num -= 1;
		win->steps_counter += 1;
		ft_printf("%d\n", win->steps_counter);
		return ;
	}
	if (win->map_parser[win->player_y + 1][win->player_x] ==
		'E' && win->coll_num == 0)
		ft_exit_down(win);
}

void	ft_move_player_right(t_win *win)
{
	if (win->map_parser[win->player_y][win->player_x + 1] == '0')
	{
		ft_right(win);
		win->map_parser[win->player_y][win->player_x] = '0';
		win->map_parser[win->player_y][win->player_x + 1] = 'P';
		win->player_x += 1;
		win->steps_counter += 1;
		ft_printf("%d\n", win->steps_counter);
		return ;
	}
	if (win->map_parser[win->player_y][win->player_x + 1] == 'C')
	{
		ft_touch_coll_right(win);
		ft_printf("%d\n", win->steps_counter);
		return ;
	}
	if (win->map_parser[win->player_y][win->player_x + 1] ==
		'E' && win->coll_num == 0)
		ft_exit_right(win);
}

void	ft_move_player_up(t_win *win)
{
	if (win->map_parser[win->player_y - 1][win->player_x] == '0')
	{
		win->map_parser[win->player_y][win->player_x] = '0';
		win->map_parser[win->player_y - 1][win->player_x] = 'P';
		win->player_y -= 1;
		win->steps_counter += 1;
		ft_printf("%d\n", win->steps_counter);
		return ;
	}
	if (win->map_parser[win->player_y - 1][win->player_x] == 'C')
	{
		win->map_parser[win->player_y][win->player_x] = '0';
		win->map_parser[win->player_y - 1][win->player_x] = 'P';
		win->player_y -= 1;
		win->coll_num -= 1;
		win->steps_counter += 1;
		ft_printf("%d\n", win->steps_counter);
		return ;
	}
	if (win->map_parser[win->player_y - 1][win->player_x] ==
		'E' && win->coll_num == 0)
		ft_exit_up(win);
}

void	ft_move_player_left(t_win *win)
{
	if (win->map_parser[win->player_y][win->player_x - 1] == '0')
	{
		ft_left(win);
		win->map_parser[win->player_y][win->player_x] = '0';
		win->map_parser[win->player_y][win->player_x - 1] = 'P';
		win->player_x -= 1;
		win->steps_counter += 1;
		ft_printf("%d\n", win->steps_counter);
		return ;
	}
	if (win->map_parser[win->player_y][win->player_x - 1] == 'C')
	{
		ft_touch_coll_left(win);
		return ;
	}
	if (win->map_parser[win->player_y][win->player_x - 1] ==
	'E' && win->coll_num == 0)
		ft_exit_left(win);
}
