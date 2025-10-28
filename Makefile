# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yuriiartymicloud.com <yuriiartymicloud.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/21 18:12:56 by yuriiartymi       #+#    #+#              #
#    Updated: 2025/10/28 15:37:38 by yuriiartymi      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAIN := main
NAME := libft.a
CC := cc
AR := ar -rcs
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
		ft_tolower.c \
		ft_toupper.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \

OBJC_MAIN := ${SRC_MAIN:.c=.o}
OBJC := ${SRCS:.c=.o}

all: ${NAME}

${MAIN}: ${OBJC_MAIN} ${NAME}
	${CC} ${FLAGS} $< -L. -lft -o $@

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
