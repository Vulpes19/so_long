NAME = so_long
BONUS = so_long_bonus
FILES = main.c
MLX = /usr/local/lib
PRINTF = ft_printf
LIBPRINTF = ft_printf/libftprintf.a
MLXFLAGS = -lmlx -framework OpenGL -framework AppKit
HEADER = gnl/get_next_line.h so_long.h ft_printf/ft_printf.h
INCLUDE = /usr/local/include
CFLAGS = -Wall -Wextra -Werror
GNL = gnl/get_next_line.c gnl/get_next_line_utils.c
GNLOBJS = $(GNL:.c=.o)
SRC = make_window.c map_parsing.c check_map.c render.c error_msgs.c player_moves_norme.c put_image.c player_moves_norme2.c player_moves.c direction.c additional_func.c
OBJS = $(SRC:.c=.o)
DEL = rm -f

all: $(NAME)

%.o: %.c
	cc -c $(CFLAGS) -o $@ $< -g

$(NAME): $(GNLOBJS) $(OBJS) $(LIBPRINTF) $(HEADER)
	cc $(CFLAGS) -g $(FILES) $(OBJS) $(GNLOBJS) $(LIBPRINTF) -I$(INCLUDE) -L$(MLX) $(MLXFLAGS) -o $(NAME) 

$(LIBPRINTF):
	$(MAKE) -C $(PRINTF)

bonus :
	$(MAKE) -C $(BONUS)

clean:
	$(DEL) $(OBJS) $(GNLOBJS)
	$(MAKE) -C $(PRINTF) clean
	$(MAKE) -C $(BONUS) clean

fclean: clean
	$(DEL) $(NAME)
	$(MAKE) -C $(PRINTF) fclean
	$(MAKE) -C $(BONUS) fclean

re: fclean all

.PHONY: all clean fclean re