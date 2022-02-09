/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:48:38 by abaioumy          #+#    #+#             */
/*   Updated: 2022/02/08 18:09:26 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFFER_SIZE 1000000

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

char	*ft_strjoin2(char **s1, char *s2);
size_t	ft_strlen1(char *str);
char	*ft_strdup2(char *src);
int		check_nl(char *saved);
void	free_pointers(char **ptr1, char **ptr2);
char	*get_next_line(int fd);
char	*ft_substr2(char *s, unsigned int start, size_t len);

#endif