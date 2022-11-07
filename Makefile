# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myanez-p <myanez-p@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/29 13:08:59 by melanieyane       #+#    #+#              #
#    Updated: 2022/11/07 13:09:56 by myanez-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_split.c ft_strmapi.c ft_striteri.c ft_memcmp.c ft_memchr.c ft_memmove.c ft_memcpy.c ft_calloc.c ft_strdup.c ft_strrchr.c ft_strchr.c ft_strnstr.c ft_strncmp.c ft_tolower.c ft_toupper.c ft_bzero.c ft_memset.c ft_strlcat.c ft_strlcpy.c ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_strjoin.c ft_strlen.c ft_strtrim.c ft_substr.c
OBJS = ${SRCS:.c=.o}
NAME = libft.a
HEADERS = .

RM = rm -f

GCC = GCC

CFLAGS = -Wall -Wextra -Werror

.c.o :
		${GCC} ${CFLAGS} -I ${HEADERS} -c $< -o ${<:.c=.o}

${NAME} : ${OBJS}
		ar rc ${NAME} ${OBJS}

all : ${NAME}

clean : 
		${RM} ${OBJS}

fclean :	clean
			${RM} ${NAME}

re : fclean all

.PHONY: re fclean clean all
