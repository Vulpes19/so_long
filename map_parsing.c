/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_parsing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 19:17:56 by abaioumy          #+#    #+#             */
/*   Updated: 2022/02/09 16:29:21 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_borders(int len, char *s, char c)
{
	int	i;

	i = 0;
	if (c == 'M')
	{
		if (s[0] == 49 && s[ft_strlen2(s) - 2] == 49)
			return (1);
		else
			return (0);
	}
	else
	{
		while (s[i] == '1')
			i++;
	}
	if (i == len - 1)
		return (0);
	else
		return (1);
}

int	check_map2(int fd, t_check *check, int len, t_win *map)
{
	char	*str;

	check->i = 0;
	str = get_next_line(fd);
	while (str)
	{
		if (check->i == map->map_h - 2)
		{
			if (check_map4(check, len, str))
				return (1);
		}
		if ((len == ft_strlen2(str) || len - 1 == ft_strlen2(str))
			&& check_borders(len, str, 'M'))
			check_map3(map, check, str);
		else
		{
			free(str);
			ft_error('1');
		}
		check->i++;
		free(str);
		str = get_next_line(fd);
	}
	free(str);
	return (1);
}

int	check_map(char **av, t_win *map)
{
	t_check	check;

	ft_func(av[1], map, &check);
	if (check_borders(map->len, map->str, 'T'))
	{
		free(map->str);
		printf("ERROR: the map isn't closed !");
		return (0);
	}
	if (check_map2(map->fd, &check, map->len, map))
	{
		free(map->str);
		return (1);
	}
	else
	{
		free(map->str);
		return (0);
	}
}

void	size_of_map(char **av, t_win *map)
{
	int		fd;
	char	*str;

	fd = open(av[1], O_RDONLY);
	str = get_next_line(fd);
	free(str);
	map->map_w = ft_strlen2(str) - 1;
	str = get_next_line(fd);
	while (str)
	{
		map->map_h += 1;
		free(str);
		str = get_next_line(fd);
	}
	free(str);
	map->map_h += 1;
}
