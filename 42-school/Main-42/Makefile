# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/01 14:19:47 by dcaetano          #+#    #+#              #
#    Updated: 2023/10/01 17:24:15 by dcaetano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	= ft_putchar.c ft_putstr.c ft_read_from_stdin.c

SRCS	= ${addprefix ./srcs/, ${SRC}}

OBJS	= ${SRCS:.c=.o}

INCLUDES	= ./includes

NAME	= libft

AR	= ar rcs

RM	= rm -f

LIB	= ranlib

CC	= cc

FLAGS	= -Wall -Werror -Wextra

NAME_EXEC	= main

SRCS_EXEC	= main.c

OBJS_EXEC	= ${SRCS_EXEC:.c=.o}

all:	${NAME} ${NAME_EXEC}

.c.o:
	${CC} ${FLAGS} -c -I ${INCLUDES} $< -o ${<:.c=.o}

${NAME}:${OBJS}
	${AR} ${NAME} ${OBJS}
	${LIB} ${NAME}

${NAME_EXEC}:${OBJS_EXEC} ${NAME}
	${CC} ${FLAGS} ${OBJS_EXEC} -o ${NAME_EXEC} -L. ${NAME}

clean:
	${RM} ${OBJS}
	${RM} ${OBJS_EXEC}

fclean:	clean
	${RM} ${NAME}
	${RM} ${NAME_EXEC}

re:	fclean all

.PHONY: clean fclean
