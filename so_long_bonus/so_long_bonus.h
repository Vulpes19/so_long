/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:42:48 by abaioumy          #+#    #+#             */
/*   Updated: 2022/02/14 15:24:56 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_BONUS_H
# define SO_LONG_BONUS_H
# define BUFFER_SIZE 1000000
# define A_KEY 0
# define W_KEY 13
# define S_KEY 1
# define D_KEY 2
# define WHITE 0xffffff
# include <mlx.h> 
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "gnl/get_next_line.h"

typedef struct s_chicken
{
	void	**chicken;
}				t_chicken;

typedef struct s_enemy
{
	void	**enemy;
}				t_enemy;

typedef struct s_win
{
	int			i;
	int			iftrue;
	char		*str;
	int			len;
	int			fd;
	int			w;
	int			h;
	void		*en;
	void		**animation;
	t_chicken	*coll2;
	int			frames_fox;
	int			frames_chicken;
	void		*win;
	void		*init;
	int			map_w;
	int			map_h;
	char		*s;
	char		**map_parser;
	int			player_x;
	int			player_y;
	int			steps_counter;
	int			coll_num;
	void		*wall;
	void		*grass;
	void		*player;
	void		*exit;
	void		*coll;
	int			x;
	int			y;
}	t_win;

typedef struct s_data
{
	int	col;
	int	exit;
	int	s_pos;
}	t_data;

typedef struct s_check
{
	int	i;
	int	counter_c;
	int	counter_e;
	int	counter_p;
}	t_check;

void	make_window(t_win *win, char *s);
char	*ft_itoa(int n);
int		ft_printf(const char *str, ...);
int		ft_strlen2(char *str);
void	ft_animation(t_win *map);
int		check_letters(char *s);
void	size_of_map(char **argv, t_win *map);
int		check_coll(char *s);
int		check_exit(char *s);
int		check_plr(char *s);
int		check_map(char **av, t_win *map);
int		check_map3(t_win *map, t_check *check, char *str);
int		check_borders(int len, char *s, char c);
int		get_fd(char *s);
void	check_all(t_data *data, char *s);
int		ft_error(char c);
void	render(t_win *map, char *s);
int		draw_map(t_win *map);
void	assign_texture(t_win *map);
void	ft_move_player_down(t_win *win);
void	ft_move_player_right(t_win *win);
void	ft_move_player_up(t_win *win);
void	ft_move_player_left(t_win *win);
void	ft_right(t_win *map);
void	ft_left(t_win *map);
void	ft_chicken(t_win *map);
void	ft_enemy(t_win *map);
char	*ft_itoa(int n);
void	ft_exit_right(t_win *win);
void	ft_touch_enemy_right(t_win *win);
void	ft_touch_coll_right(t_win *win);
void	ft_exit_left(t_win *win);
void	ft_touch_enemy_left(t_win *win);
void	ft_touch_coll_left(t_win *win);
void	ft_exit_down(t_win *win);
void	ft_exit_up(t_win *win);
void	ft_touch_enemy_down(t_win *win);
void	ft_touch_enemy_up(t_win *win);
void	ft_check_image(t_win *map);
void	ft_put_image_to_window(t_win *map, char c);
void	ft_frames_check(t_win *map);
void	ft_steps(t_win *map);
int		check_map4(t_check *check, int len, char *str);
void	ft_func(char *s, t_win *map, t_check *check);
int		ft_check_map_file(char *s);
void	ft_variables(t_win *map);
void	ft_variables(t_win *map);
void	ft_check_protection(t_win *map);
void	ft_player_protection(t_win *map);
void	ft_coll_protection(t_win *map);
void	ft_map_errors(char c);

#endif