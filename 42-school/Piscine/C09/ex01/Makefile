SRC	= ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c

OBJS	= ${SRC:.c=.o}

HEAD	= ./includes

NAME	= libft.a

AR	= ar rcs

RM	= rm -f

LIB	= ranlib

CC	= cc

FLAGS	= -Wall -Wextra -Werror

all:	${NAME}

.c.o:
	${CC} ${FLAGS} -c -I ${HEAD} $< -o ${<:.c=.o}

${NAME}:${OBJS}
	${AR} ${NAME} ${OBJS}
	${LIB} ${NAME}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re
