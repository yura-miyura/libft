# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yuriiartymicloud.com <yuriiartymicloud.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/21 18:12:56 by yuriiartymi       #+#    #+#              #
#    Updated: 2025/10/23 22:53:38 by yuriiartymi      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft
CC := cc
FLAGS := -Wall -Werror -Wextra

SRCS := main.c \
		ft_isalpha.c \
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
# 	ar rcs $@ $^
	${CC} ${FLAGS} $^ -o $@

${OBJC}: ${SRCS}
	${CC} ${FLAGS} -c $^

fclean: clean
	rm -f ${NAME}

clean:
	rm -f ${OBJC}

re: fclean all

.PHONY: all fclean clean re
