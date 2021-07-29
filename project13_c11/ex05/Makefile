# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cado-car <cado-car@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/29 18:20:02 by cado-car          #+#    #+#              #
#    Updated: 2021/07/29 18:20:03 by cado-car         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME	= do-op

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

INCS	= includes
SRCS	= srcs/ft_atoi.c srcs/ft_do-op.c srcs/ft_operations.c srcs/ft_putnbr.c \
			srcs/ft_putstr.c srcs/ft_strlen.c
OBJS	= ${SRCS:.c=.o}

.c.o :	
			${CC} ${CFLAGS} -I ${INCS} -c $< -o ${<:.c=.o} 
all :		${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}
clean : 	
			${RM} ${OBJS}
fclean :	clean
			${RM} ${NAME}

re :		fclean all