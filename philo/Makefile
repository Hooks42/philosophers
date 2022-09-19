# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/09 15:47:28 by ceatgie           #+#    #+#              #
#    Updated: 2022/09/19 16:43:51 by ceatgie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	philosophers

SRCS	=	main.c\
			Parsing/ft_error_message.c\
			Parsing/ft_parse_input.c\
			Libft/ft_putstr_fd.c\
			Libft/ft_strlen.c\
			Libft/ft_atoi.c\
			Philo/philosophers.c\
			Philo/ft_add_philo.c\
			Philo/ft_only_one_philo.c\
			Philo/ft_create_philo.c\
			Utils/ft_error_msg.c\
			Utils/ft_get_time.c\
			Utils/ft_init.c\
			Utils/ft_usleep.c\


OBJS= $(SRCS:.c=.o)

CC		=	gcc

CFLAGS	=	-Wall -Werror -Wextra -pthread
.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all : ${NAME}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

clean:
			rm -rf ${OBJS}

fclean:		clean
			rm -rf ${NAME}

re:			fclean all

.PHONY:	all clean fclean re