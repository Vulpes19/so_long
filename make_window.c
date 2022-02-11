/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_window.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 17:57:06 by abaioumy          #+#    #+#             */
/*   Updated: 2022/02/11 14:49:18 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_func(char *s, t_win *map, t_check *check)
{
	map->fd = get_fd(s);
	map->str = get_next_line(map->fd);
	map->len = ft_strlen2(map->str);
	map->coll_num = 0;
	check->counter_c = 0;
	check->counter_p = 0;
	check->counter_e = 0;
}

void	make_window(t_win *win, char *s)
{
	win->init = mlx_init();
	win->win = mlx_new_window
		(win->init, win->map_w * 80, win->map_h * 80, "What does the fox say");
	render(win, s);
}
