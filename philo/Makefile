# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/09 15:47:28 by ceatgie           #+#    #+#              #
#    Updated: 2022/10/05 15:00:26 by ceatgie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	philo

SRCS	=	main.c\
			Actions/ft_eat.c\
			Actions/ft_lock_forks.c\
			Check/ft_check_end.c\
			Check/ft_check_if_dead.c\
			Check/ft_check_if_everyone_has_eaten.c\
			Libft/ft_atoi.c\
			Libft/ft_putstr_fd.c\
			Libft/ft_strlen.c\
			Libft/ft_strncmp.c\
			Mutexes/ft_create_mutexes.c\
			Mutexes/ft_destroy_mutex.c\
			Mutexes/ft_generate_forks.c\
			Mutexes/ft_lock_mutex.c\
			Mutexes/ft_unlock_mutex.c\
			Parsing/ft_check_if_not_number.c\
			Parsing/ft_check_if_not_null_string.c\
			Parsing/ft_error_message.c\
			Parsing/ft_parsing_manager.c\
			Philosophers/ft_add_philo.c\
			Philosophers/ft_create_philos.c\
			Philosophers/ft_only_one_philo.c\
			Philosophers/philosophers.c\
			Simulation/ft_end_simulation.c\
			Simulation/ft_start_simulation.c\
			Threads/ft_create_threads.c\
			Threads/ft_join_threads.c\
			Utils/ft_error_msg.c\
			Utils/ft_get_time.c\
			Utils/ft_init.c\
			Utils/ft_usleep.c\
			Utils/ft_write_logs.c\


OBJS= $(SRCS:.c=.o)

CC		=	gcc

CFLAGS	=	-Wall -Werror -Wextra -pthread -g3

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