NAME	=	get_next_line.a

CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror
RM      =	rm -f

SRCS 	=	get_next_line.c\
			get_next_line_utils.c\

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