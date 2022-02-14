/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_msgs_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:42:00 by abaioumy          #+#    #+#             */
/*   Updated: 2022/02/14 15:26:11 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	ft_error(char c)
{
	if (c == '1')
	{
		ft_printf("ERROR: the map isn't closed !\n");
		exit(1);
	}
	if (c == '2')
	{
		ft_printf("ERROR: you need at least one collectible");
		ft_printf(", one exit and one starting position !\n");
		exit(1);
	}
	if (c == '3')
	{
		ft_printf("ERROR: there's an unallowed letter in the map\n");
		exit(1);
	}
	return (1);
}

void	ft_check_protection(t_win *map)
{
	if (!map->wall)
	{
		ft_printf("The wall file doesn't exist.\n");
		exit(0);
	}
	if (!map->grass)
	{
		ft_printf("The grass file doesn't exist.\n");
		exit(0);
	}
	if (!map->exit)
	{
		ft_printf("The exit file doesn't exist.\n");
		exit(0);
	}
}

void	ft_map_errors(char c)
{
	if (c == '1')
	{
		ft_printf("The map file doesn't exist");
		exit(0);
	}
	if (c == '2')
	{
		ft_printf("The map file is empty!");
		exit(0);
	}
	if (c == '3')
	{
		ft_printf("the map must be rectangular!");
		exit(0);
	}
}

void	ft_player_protection(t_win *map)
{
	int	i;

	i = 0;
	while (i < 11)
	{
		if (!map->animation[i])
		{
			ft_printf("The player file doesn't exist");
			ft_printf(" or the name of the file is incorrect!\n");
			exit(0);
		}
		i++;
	}
}
