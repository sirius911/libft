# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clorin <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/11 14:15:29 by clorin            #+#    #+#              #
#    Updated: 2020/09/15 13:43:27 by clorin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
.phony: all clean fclean re

NAME		= libft.a

CC		= gcc

CFLAGS		= -Wall -Wextra -Werror

HEADER		= -I .

SRCS		= ft_strlen.c ft_putchar.c ft_putstr.c ft_memset.c \
			ft_bzero.c ft_memcpy.c ft_memccpy.c

OBJS		= ${SRCS:.c=.o}

.c.o:
			${CC} ${CFLAGS} ${HEADER} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

all:		${NAME}

clean:	
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}
			rm -f test
			
re:			fclean	all

test:		main.c
			@${CC} -I . -L . -O main.c -o test -lft
			@echo "\033[1;33mCompilation test\t\033[0;32m-OK-\033[0m"
