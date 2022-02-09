/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_moves_norme2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:10:08 by abaioumy          #+#    #+#             */
/*   Updated: 2022/02/09 16:37:56 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_exit_left(t_win *win)
{
	win->map_parser[win->player_y][win->player_x] = '0';
	win->map_parser[win->player_y][win->player_x - 1] = 'E';
	ft_printf("%d\n", win->steps_counter);
	ft_printf("YOU WIN\n");
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
	ft_printf("%d\n", win->steps_counter);
}
