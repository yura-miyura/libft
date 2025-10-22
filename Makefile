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

NAME := libft.a
CC := cc
FLAGS := -Wall -Werror -Wextra
SRCS := ???

OBJC := ${SRCS:.c=.o}

all: ${NAME}

${NAME}: ${OBJC}
	ar rcs $@ $^

${OBJC}: ${SRCS}
	${CC} -c $^ -o ${OBJC}

fclean: clean
	rm -f ${NAME}

clean:
	rm -f ${OBJC}

re: fclean all

.PHONY: all fclean clean re
