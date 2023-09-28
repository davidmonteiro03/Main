# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/28 10:51:16 by dcaetano          #+#    #+#              #
#    Updated: 2023/09/28 14:52:07 by dcaetano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	= ft_strrchr.c ft_memset.c ft_bzero.c ft_memcpy.c

OBJS	= ${SRC:.c=.o}

NAME	= libft.a

AR	= ar rcs

RM	= rm -f

LIB	= ranlib

CC	= cc

FLAGS	= -Wall -Wextra -Werror

all:	${NAME}

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}:${OBJS}
	${AR} ${NAME} ${OBJS}
	${LIB} ${NAME}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all

.PHONY:	clean fclean
