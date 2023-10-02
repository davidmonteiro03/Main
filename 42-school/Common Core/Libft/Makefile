# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/02 13:06:53 by dcaetano          #+#    #+#              #
#    Updated: 2023/10/02 13:41:24 by dcaetano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_isalpha.c ft_isdigit.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

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
	${CC} ${FLAGS} -I ./ -c $< -o ${<:.c=.o}

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
