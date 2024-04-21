# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/21 14:14:08 by ovosmera          #+#    #+#              #
#    Updated: 2024/04/21 14:14:38 by ovosmera         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	so_long

CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror
RM      =	rm -f

SRCS 	=

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
