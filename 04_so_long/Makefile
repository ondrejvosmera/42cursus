# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/21 14:14:08 by ovosmera          #+#    #+#              #
#    Updated: 2024/08/06 15:17:57 by ovosmera         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of the program.
NAME = so_long

# Compiler
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Paths
LIBFT_PATH = ./lib/libft/
LIBFT_NAME = libft.a
LIBFT = $(LIBFT_PATH)$(LIBFT_NAME)

LIBMLX_PATH = ./lib/MLX42
LIBMLX_NAME = /build/libmlx42.a
LIBMLX = $(LIBMLX_PATH)$(LIBMLX_NAME) -ldl -lglfw -pthread -lm

# Includes
INC_LIBMLX = -I ./include -I $(LIBMLX_PATH)/include
INC_LIBFT = -I $(LIBFT_PATH)

# Sources and objects
SRC_PATH = ./src/
SRC = errors.c so_long.c read_map.c render_map.c textures.c
SRCS = $(addprefix $(SRC_PATH), $(SRC))

OBJ_PATH = ./obj/
OBJ = $(SRC:.c=.o)
OBJS = $(addprefix $(OBJ_PATH), $(OBJ))

# Rules
all: libft libmlx $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@$(CC) $(CFLAGS) $(INC_LIBMLX) $(INC_LIBFT) -c $< -o $@

$(OBJS): | $(OBJ_PATH)

$(OBJ_PATH):
	@mkdir -p $(OBJ_PATH)

libft:
	@echo "[ Making libft... ]"
	@make -C $(LIBFT_PATH)
	@echo "[ Libft ready ]"

libmlx:
	@echo "[ Making MLX42... ]"
	@cmake -S $(LIBMLX_PATH) -B $(LIBMLX_PATH)/build
	@make -C $(LIBMLX_PATH)/build
	@echo "[ MLX42 ready ]"

$(NAME): $(OBJS)
	@echo "[ Compiling $(NAME)... ]"
	@$(CC) $(OBJS) -o $(NAME) $(LIBMLX) $(LIBFT)
	@echo "[ $(NAME) ready ]"

bonus: all

clean:
	@rm -rf $(OBJ_PATH)
	@make clean -C $(LIBFT_PATH)
	@rm -rf $(LIBMLX_PATH)/build
	@echo "[ Obj files deleted ]"

fclean: clean
	@rm -f $(NAME)
	@echo "[ Program deleted ]"

re: fclean all

.PHONY: all bonus re clean fclean libmlx libft
