# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yuriiartymicloud.com <yuriiartymicloud.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/21 18:12:56 by yuriiartymi       #+#    #+#              #
#    Updated: 2025/10/24 08:17:30 by yuriiartymi      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAIN := main
NAME := libft.a
CC := cc
AR := ar rcs
FLAGS := -Wall -Werror -Wextra

SRC_MAIN = main.c

SRCS = ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \

OBJC_MAIN := ${SRC_MAIN:.c=.o}
OBJC := ${SRCS:.c=.o}

all: ${NAME}

${MAIN}: ${OBJC_MAIN} ${NAME}
	${CC} ${FLAGS} $< -L. -lft -lbsd -o $@

${OBJC_MAIN}: ${SRC_MAIN}
	${CC} ${FLAGS} -c $^ -o $@

${NAME}: ${OBJC}
	${AR} $@ $^

${OBJC}: %.o: %.c
	${CC} ${FLAGS} -c $< -o $@

fclean: clean
	rm -f ${NAME} ${MAIN}

clean:
	rm -f ${OBJC} ${OBJC_MAIN}

re: fclean all

.PHONY: all fclean clean re
