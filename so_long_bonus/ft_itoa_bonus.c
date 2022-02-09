/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:26:00 by abaioumy          #+#    #+#             */
/*   Updated: 2022/02/09 14:50:16 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

static char	*cal(char *num, int ndigits, int len, int n)
{
	int	ifneg;

	ifneg = 0;
	while (ndigits >= 0)
	{
		if (n < 0)
		{
			n *= -1;
			ifneg = 1;
		}
		num[ndigits] = n % 10 + '0';
		n /= 10;
		ndigits--;
	}
	if (ifneg)
		num[0] = '-';
	num[len] = '\0';
	return (num);
}

static int	ndigits(int n)
{
	int	count;

	count = 0;
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		nd;
	int		len;

	if (n == -2147483648)
		return (ft_strdup2("-2147483648"));
	nd = ndigits(n);
	len = nd;
	if (n == 0)
		return (ft_strdup2("0"));
	if (n < 0)
	{
		nd++;
		len++;
	}
	num = (char *)malloc(sizeof(char) * nd + 1);
	if (!num)
		return (0);
	nd -= 1;
	return (cal(num, nd, len, n));
}
