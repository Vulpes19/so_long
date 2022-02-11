/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   additional_func_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:30:51 by abaioumy          #+#    #+#             */
/*   Updated: 2022/02/10 14:55:08 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	ft_strlen2(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_map3(t_win *map, t_check *check, char *str)
{
	if (!check_letters(str))
		return (ft_error('3'));
	check->counter_c += check_coll(str);
	map->coll_num += check_coll(str);
	check->counter_e += check_exit(str);
	check->counter_p += check_plr(str);
	return (1);
}

void	ft_frames_check(t_win *map)
{
	if (map->frames_fox == 11)
		map->frames_fox = 0;
	if (map->frames_chicken == 9)
		map->frames_chicken = 0;
}

void	ft_steps(t_win *map)
{
	char	*s;

	map->frames_fox++;
	map->frames_chicken++;
	s = ft_itoa(map->steps_counter);
	mlx_string_put(map->init, map->win, 10, 10, WHITE, s);
	free(s);
}
