# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clorin <clorin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/15 14:40:58 by clorin            #+#    #+#              #
#    Updated: 2020/09/15 14:41:03 by clorin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.phony: all clean fclean re

NAME		= libft.a

CC		= gcc

CFLAGS		= -Wall -Wextra -Werror

HEADER		= -I .

SRCS		= ft_strlen.c ft_putchar.c ft_putstr.c ft_memset.c \
			ft_strcpy.c ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c \
			ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c  ft_strcmp.c \
			ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c \
			ft_strncmp.c ft_memcmp.c ft_memalloc.c ft_strnew.c ft_strdup.c \
			ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalpha.c ft_isascii.c \
			ft_isspace.c ft_isprint.c ft_toupper.c ft_tolower.c

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
			@${CC} ${HEADER} -L . -O main.c -o test -lft
			@echo "\033[1;33mCompilation test\t\033[0;32m-OK-\033[0m"
