/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:42:09 by abaioumy          #+#    #+#             */
/*   Updated: 2022/02/17 14:48:14 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	ft_close_esc(int keycode, t_win *win)
{
	if (keycode == 53)
	{
		free(win->win);
		exit(0);
	}
	return (0);
}

int	ft_close_x(t_win *map)
{
	mlx_clear_window(map->init, map->win);
	exit(0);
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

	ft_variables(&map);
	size_of_map(av, &map);
	if (!ft_check_map_file(av[1]))
		ft_not_ber_file();
	if (ac == 2 && check_map(av, &map))
	{
		make_window(&map, av[1]);
		mlx_key_hook(map.win, ft_moves, &map);
		ft_close_window(&map);
		mlx_loop_hook(map.init, draw_map, &map);
		mlx_loop(map.init);
	}
	if (map.iftrue == 1)
	{
		while (map.i < map.map_h)
		{
			free(map.map_parser[map.i]);
			map.i++;
		}
		free(map.map_parser);
	}
	return (0);
}
