/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:50:00 by abaioumy          #+#    #+#             */
/*   Updated: 2022/02/09 16:39:14 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_letters(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] != '0' && s[i] != '1' && s[i] != 'P'
			&& s[i] != 'E' && s[i] != 'C' && s[i] != '\n')
			return (0);
		i++;
	}
	return (1);
}

int	check_coll(char *s)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (s[i])
	{
		if (s[i] == 'C')
			counter++;
		i++;
	}
	return (counter);
}

int	check_exit(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == 'E')
			return (1);
		i++;
	}
	return (0);
}

int	check_plr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == 'P')
			return (1);
		i++;
	}
	return (0);
}
