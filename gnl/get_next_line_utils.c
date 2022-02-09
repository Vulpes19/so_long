/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 18:24:52 by abaioumy          #+#    #+#             */
/*   Updated: 2022/02/08 18:00:17 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_cat(char *dest, char *src, char *ptr, int len)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (i < len)
	{
		while (dest[j])
		{
			ptr[i] = dest[j];
			i++;
			j++;
		}
		j = 0;
		while (src[j])
		{
			ptr[i] = src[j];
			i++;
			j++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}

size_t	ft_strlen1(char *str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin2(char **s1, char *s2)
{
	int		s2len;
	int		s1len;
	char	*ptr;

	s1len = 0;
	if (*s1 == NULL && s2 == NULL)
		return (NULL);
	if (!*s1)
		*s1 = ft_strdup2("");
	s1len = ft_strlen1(*s1);
	s2len = ft_strlen1(s2);
	s1len += s2len;
	ptr = (char *)malloc(sizeof(char) * s1len + 1);
	if (!ptr)
		return (0);
	ptr = ft_cat(*s1, s2, ptr, s1len);
	free_pointers(s1, NULL);
	return (ptr);
}

int	check_nl(char *saved)
{
	int	i;

	i = 0;
	if (saved)
	{
		while (saved[i])
		{
			if (saved[i] == '\n')
				return (1);
			i++;
		}
	}
	return (0);
}

char	*ft_strdup2(char *src)
{
	int		i;
	int		len;
	char	*dest;

	i = 0;
	len = ft_strlen1(src);
	dest = (char *)malloc(sizeof(char) * len + 1);
	if (!dest)
		return (0);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
