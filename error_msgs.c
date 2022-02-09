/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_msgs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:57:10 by abaioumy          #+#    #+#             */
/*   Updated: 2022/02/09 16:39:30 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

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
