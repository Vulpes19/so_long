/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_window_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:42:16 by abaioumy          #+#    #+#             */
/*   Updated: 2022/02/09 12:54:01 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	make_window(t_win *win, char *s)
{
	win->init = mlx_init();
	win->win = mlx_new_window
		(win->init, win->map_w * 80, win->map_h * 80, "What does the fox say");
	render(win, s);
}
