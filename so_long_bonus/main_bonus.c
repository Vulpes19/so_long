/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:42:09 by abaioumy          #+#    #+#             */
/*   Updated: 2022/02/10 17:18:47 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	ft_close(int keycode, t_win *win)
{
	if (keycode == 53)
	{
		free(win->win);
		exit(0);
	}
	return (0);
}

int	ft_moves(int key, t_win *win)
{
	if (key == S_KEY)
		ft_move_player_down(win);
	if (key == A_KEY)
		ft_move_player_left(win);
	if (key == D_KEY)
		ft_move_player_right(win);
	if (key == W_KEY)
		ft_move_player_up(win);
	return (0);
}

int	main(int ac, char **av)
{
	t_win	map;

	map.frames_fox = 0;
	map.frames_chicken = 0;
	map.steps_counter = 0;
	size_of_map(av, &map);
	if (ac == 2 && check_map(av, &map))
	{
		make_window(&map, av[1]);
		mlx_key_hook(map.win, ft_moves, &map);
		mlx_hook(map.win, 2, 1L << 0, ft_close, &map);
		mlx_hook(map.win, 12, 0, ft_close, &map);
		mlx_loop_hook(map.init, draw_map, &map);
		mlx_loop(map.init);
	}
	ft_printf("You must have one argument");
	return (0);
}
