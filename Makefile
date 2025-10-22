# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yuriiartymicloud.com <yuriiartymicloud.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/21 18:12:56 by yuriiartymi       #+#    #+#              #
#    Updated: 2025/10/22 11:40:06 by yuriiartymi      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft
CC := cc
FLAGS := -Wall -Werror -Wextra

SRCS := ft_isalpha.c \
		main.c

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
