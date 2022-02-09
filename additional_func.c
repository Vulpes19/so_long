/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   additional_func.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:30:51 by abaioumy          #+#    #+#             */
/*   Updated: 2022/02/09 16:39:35 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

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

int	get_fd(char *s)
{
	return (open(s, O_RDONLY));
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
