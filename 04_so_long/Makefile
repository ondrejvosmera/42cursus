# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/21 14:14:08 by ovosmera          #+#    #+#              #
#    Updated: 2024/12/16 10:49:51 by ovosmera         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

CC = gcc
CFLAGS = -Wall -Wextra -Werror

LIBFT_PATH = ./lib/libft/
LIBFT_NAME = libft.a
LIBFT = $(LIBFT_PATH)$(LIBFT_NAME)

LIBMLX_PATH = ./lib/MLX42
LIBMLX_NAME = /build/libmlx42.a
LIBMLX = $(LIBMLX_PATH)$(LIBMLX_NAME) -ldl -lglfw -pthread -lm

FT_PRINTF_PATH = ./lib/ft_printf
GNL_PATH = ./lib/gnl

INC_LIBMLX = -I ./include -I $(LIBMLX_PATH)/include
INC_LIBFT = -I $(LIBFT_PATH)
INC_FT_PRINTF = -I $(FT_PRINTF_PATH)
INC_GNL = -I $(GNL_PATH)

SRC_PATH = ./src/
OBJ_PATH = ./obj/

SRCS = $(SRC_PATH)so_long.c \
       $(SRC_PATH)error.c \
       $(SRC_PATH)map.c \
       $(SRC_PATH)map_check.c \
       $(SRC_PATH)map_path.c \
       $(SRC_PATH)map_utils.c \
       $(SRC_PATH)game.c \
       $(SRC_PATH)input.c \
       $(SRC_PATH)render.c \
       $(SRC_PATH)clean.c \
       $(FT_PRINTF_PATH)/ft_printf.c \
       $(FT_PRINTF_PATH)/ft_printf_utils.c \
       $(GNL_PATH)/get_next_line.c \
       $(GNL_PATH)/get_next_line_utils.c

OBJ = $(SRCS:.c=.o)

OBJS = $(patsubst $(SRC_PATH)%, $(OBJ_PATH)%, $(filter $(SRC_PATH)%.o, $(OBJ)))
OBJS += $(patsubst $(FT_PRINTF_PATH)/%, $(OBJ_PATH)ft_printf_%, $(filter $(FT_PRINTF_PATH)%.o, $(OBJ)))
OBJS += $(patsubst $(GNL_PATH)/%, $(OBJ_PATH)gnl_%, $(filter $(GNL_PATH)%.o, $(OBJ)))

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir -p $(OBJ_PATH)
	$(CC) $(CFLAGS) $(INC_LIBMLX) $(INC_LIBFT) $(INC_FT_PRINTF) $(INC_GNL) -c $< -o $@

$(OBJ_PATH)ft_printf_%.o: $(FT_PRINTF_PATH)/%.c
	@mkdir -p $(OBJ_PATH)
	$(CC) $(CFLAGS) $(INC_LIBMLX) $(INC_LIBFT) $(INC_FT_PRINTF) $(INC_GNL) -c $< -o $@

$(OBJ_PATH)gnl_%.o: $(GNL_PATH)/%.c
	@mkdir -p $(OBJ_PATH)
	$(CC) $(CFLAGS) $(INC_LIBMLX) $(INC_LIBFT) $(INC_FT_PRINTF) $(INC_GNL) -c $< -o $@

all: libft libmlx $(NAME)

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
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) $(LIBMLX) $(LIBFT)
	@echo "[ $(NAME) ready ]"

bonus: all

clean:
	@rm -rf $(OBJ_PATH)
	@rm -f $(SRC_PATH)*.o
	@rm -f $(FT_PRINTF_PATH)/*.o
	@rm -f $(GNL_PATH)/*.o
	@make clean -C $(LIBFT_PATH)
	@rm -rf $(LIBMLX_PATH)/build
	@echo "[ Obj files deleted ]"


fclean: clean
	@rm -f $(NAME)
	@echo "[ Program deleted ]"

re: fclean all

.PHONY: all bonus re clean fclean libmlx libft