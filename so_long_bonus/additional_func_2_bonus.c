/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   additional_func_2_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 14:51:43 by abaioumy          #+#    #+#             */
/*   Updated: 2022/02/16 15:20:59 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	check_map4(t_check *check, int len, char *str)
{
	if (check_borders(len, str, 'B'))
		ft_error('1');
	if (check->counter_c >= 1 && check->counter_e >= 1
		&& check->counter_p == 1)
	{
		free(str);
		return (1);
	}
	else
		ft_error('2');
	return (0);
}

int	get_fd(char *s)
{
	return (open(s, O_RDONLY));
}

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

void	ft_variables(t_win *map)
{
	map->i = 0;
	map->frames_fox = 0;
	map->frames_chicken = 0;
	map->steps_counter = 0;
	map->iftrue = 0;
}
