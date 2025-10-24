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

TEST = main.c
SRCS = ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \

TESTO := ${SRCS:.c=.o}
OBJC := ${SRCS:.c=.o}

all: ${NAME}

${MAIN}: ${NAME} ${TEST}
	${CC} ${FLAGS} $^ -L. -lft -o $@

${NAME}: ${OBJC}
	${AR} $@ $^
	
${OBJC}: ${SRCS}
	${CC} ${FLAGS} -c $< -o $@

fclean: clean
	rm -f ${NAME} ${MAIN}

clean:
	rm -f ${OBJC}

re: fclean all

.PHONY: all fclean clean re
