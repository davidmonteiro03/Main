# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/30 17:41:07 by dcaetano          #+#    #+#              #
#    Updated: 2023/09/30 17:48:24 by dcaetano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	= main.c

OBJS	= ${SRC:.c=.o}

NAME	= ft_display_file

CC	= cc

RM	= rm -f

FLAGS	= -Wall -Wextra -Werror

all:	${NAME}

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}:${OBJS}
	${CC} ${FLAGS} -o ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean clean

.PHONY:	clean fclean
