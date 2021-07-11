# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cado-car <cado-car@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/26 18:13:11 by cado-car          #+#    #+#              #
#    Updated: 2021/06/27 18:49:54 by cado-car         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ./srcs/ft_display_file.c ./srcs/ft_putstr.c ./srcs/main.c 
OBJS	= ${SRCS:.c=.o}
INCS	= includes
NAME	= ft_display_file
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

.c.o: 
		${CC} ${CFLAGS} -c $< -I ${INCS} -o ${<:.c=.o} 

${NAME}: ${OBJS}
		${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all: ${NAME}

clean: 
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

.PHONY: all clean fclean .c.o