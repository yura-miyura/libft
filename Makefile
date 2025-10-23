# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yuriiartymicloud.com <yuriiartymicloud.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/21 18:12:56 by yuriiartymi       #+#    #+#              #
#    Updated: 2025/10/23 08:12:11 by yuriiartymi      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAIN = main

NAME := libft.a
CC := cc
AR = ar rcs
FLAGS := -Wall -Werror -Wextra

SRCS = ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \

OBJC := ${SRCS:.c=.o}

all: ${NAME}

${NAME}: ${OBJC}
	${AR} $< -o $@

${OBJC}: ${SRCS}
	${CC} ${FLAGS} -c $< -o $@

${MAIN}:
	${CC} ${FLAGS} main.c -L. -lft -o $@

fclean: clean
	rm -f ${NAME}

clean:
	rm -f ${OBJC}

re: fclean all

.PHONY: all fclean clean re
