# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cado-car <cado-car@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/18 16:41:25 by cado-car          #+#    #+#              #
#    Updated: 2021/06/18 17:16:35 by cado-car         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS	= ${SRCS:.c=.o}
INCS	= includes 
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
NAME	= libft.a

.c.o:
				${CC} ${CFLAGS} -c $< -I ${INCS} -o ${<:.c=.o}

all :			${NAME}

${NAME} :		${OBJS}
				ar rc ${NAME} ${OBJS}
				ranlib ${NAME}

clean :
				rm -f ${OBJS}

fclean :	clean
				rm -f ${NAME}

re :		fclean all

.PHONY: all clean fclean re