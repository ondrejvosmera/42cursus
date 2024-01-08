# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 14:51:11 by ovosmera          #+#    #+#              #
#    Updated: 2023/11/15 14:51:12 by ovosmera         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror
RM      =	rm -f

SRCS 	=	ft_printf.c\
			ft_format_type.c\
			ft_putchar.c\
			ft_putstr.c\
			ft_putnbr.c\
			ft_putptr.c\
			ft_putnbr_unsigned.c\
			ft_putnbr_hex.c\
			ft_strlen.c\
			ft_strlcpy.c

OBJS	=	$(SRCS:.c=.o)

all:		$(NAME)

%.o: %.c
			$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	${OBJS}
			ar rc ${NAME} ${OBJS}

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY: all clean fclean re
