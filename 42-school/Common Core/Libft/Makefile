# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/28 10:46:32 by Dcaetano          #+#    #+#              #
#    Updated: 2023/09/28 10:49:39 by Dcaetano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	= ft_strrchr.c ft_memset.c ft_bzero.c

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
	find . -name "*.o" -type f -delete

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all

.PHONY:	clean fclean
