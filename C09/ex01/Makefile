# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sabdelka <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/18 23:16:54 by sabdelka          #+#    #+#              #
#    Updated: 2019/09/18 23:17:17 by sabdelka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

OBJS	= $(addprefix srcs/, ${SRCS:.c=.o})

NAME	= libft.a

.c.o:
		gcc -Wall -Wextra -Werror -c -I./includes $< -o ${<:.c=.o}

${NAME}:${OBJS}
		ar rc $@ $^

all:	${NAME}

clean:
		rm -f ${OBJS}

fclean:		clean
		rm -f ${NAME}

