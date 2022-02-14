/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_window_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:42:16 by abaioumy          #+#    #+#             */
/*   Updated: 2022/02/14 15:24:07 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_coll_protection(t_win *map)
{
	int	i;

	i = 0;
	while (i < 9)
	{
		if (!map->coll2->chicken[i])
		{
			ft_printf("The collectible file doesn't exist");
			ft_printf(" or the name of the file is incorrect!\n");
			exit(0);
		}
		i++;
	}
}

int	ft_check_map_file(char *s)
{
	int		len;
	char	*s2;
	int		s2len;
	int		temp;

	s2len = 4;
	len = ft_strlen2(s);
	temp = len;
	s2 = ".ber";
	while (len > temp - 4)
	{
		if (s[len] != s2[s2len])
			return (0);
		len--;
		s2len--;
	}
	return (1);
}

void	make_window(t_win *win, char *s)
{
	win->init = mlx_init();
	win->win = mlx_new_window
		(win->init, win->map_w * 80, win->map_h * 80, "What does the fox say");
	render(win, s);
}
