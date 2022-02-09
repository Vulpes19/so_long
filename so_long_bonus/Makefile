NAME = so_long_bonus
FILES = main_bonus.c
MLX = /usr/local/lib
PRINTF = ft_printf
LIBPRINTF = ft_printf/libftprintf.a
MLXFLAGS = -lmlx -framework OpenGL -framework AppKit
HEADER = gnl/get_next_line.h so_long_bonus.h ft_printf/ft_printf.h
INCLUDE = /usr/local/include
CFLAGS = -Wall -Wextra -Werror
GNL = gnl/get_next_line.c gnl/get_next_line_utils.c
GNLOBJS = $(GNL:.c=.o)
SRC = make_window_bonus.c map_parsing_bonus.c check_map_bonus.c additional_func_2_bonus.c render_bonus.c put_image_bonus.c error_msgs_bonus.c player_left_norme_bonus.c player_right_norme_bonus.c player_up_down_bonus.c player_moves_bonus.c ft_itoa_bonus.c animation_bonus.c additional_func_bonus.c
OBJS = $(SRC:.c=.o)
DEL = rm -f

all: $(NAME)

%.o: %.c $(HEADER)
	cc -c $(CFLAGS) -o $@ -g $<

$(NAME): $(GNLOBJS) $(OBJS) $(LIBPRINTF) $(HEADER)
	cc $(CFLAGS) -g $(FILES) $(OBJS) $(GNLOBJS) $(LIBPRINTF) -I$(INCLUDE) -L$(MLX) $(MLXFLAGS) -o $(NAME) 

$(LIBPRINTF):
	$(MAKE) -C $(PRINTF)

clean:
	$(DEL) $(OBJS) $(GNLOBJS)
	$(MAKE) -C $(PRINTF) clean

fclean: clean
	$(DEL) $(NAME)
	$(MAKE) -C $(PRINTF) fclean

re: fclean all

.PHONY: all clean fclean re