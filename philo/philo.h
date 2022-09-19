/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:46:57 by ceatgie           #+#    #+#             */
/*   Updated: 2022/09/19 17:46:06 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <stdbool.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <fcntl.h>
# include <stdio.h>
# include <ctype.h>
# include <pthread.h>
# include <sys/time.h>

//	DEFINES 

# define TRUE 1
# define FALSE 0
# define MILISECOND 1000
# define R_FORK_TAKEN "has taken the right fork"
# define L_FORK_TAKEN "has taken the left fork"
# define EATING "is eating"
# define SLEEPING "is sleeping"
# define THINKING "is thinking"
# define DIED "died"

//	ERROR

# define ERROR_ARGC 1
# define ERROR_ARGV 2
# define N_ARGS_ERROR "Wrong numbers of arguments.\n"
# define ARG_ERROR "Invalid argument.\n"
# define MALLOC_ERROR "Malloc error.\n"
# define MUTEX_ERROR "Creating mutex.\n"
# define LOCK_MUTEX_ERROR "Locking mutex.\n"
# define UNLOCK_MUTEX_ERROR "Unlocking mutex.\n"
# define DESTROY_MUTEX_ERROR "Destroying mutex.\n"
# define THREAD_ERROR "Creating thread.\n"
# define JOIN_THREAD_ERROR "Joining thread.\n"
# define TIME_ERROR "Getting time.\n"

//	COLORS

# define RED	"\033[0;31m"
# define YELLOW	"\033[0;33m"
# define GREEN	"\033[1;32m"
# define BLUE "\033[1;34m"
# define RESET	"\033[0m"

typedef	struct s_philo
{
	int				philo_id;
	int				has_eaten;
	int				everyone_has_eaten;
	long			last_meal;
	pthread_t		thread;
	struct s_philo	*next;
	struct s_data	*data;
}					t_philo;

typedef	struct s_data
{
	int				nb_philo;
	long			time_to_eat;
	long			time_to_sleep;
	long			time_to_die;
	int				meal_number;
	int				everyone_has_eaten;
	int				end;
	long			t0;
	int				argc;
	pthread_t		thread;
	pthread_mutex_t	*fork;
	pthread_mutex_t	check_last_meal;
	pthread_mutex_t	check_everyone_has_eaten;
	pthread_mutex_t	check_end;
	pthread_mutex_t	logs;
	t_philo			*philo;
	char			**argv;
}					t_data;


void	ft_putstr_fd(char *s, int fd);
void	ft_error_message(void);
void	ft_parse_input(char *argv[]);
void	philosophers(int argc, char *argv[]);
size_t	ft_strlen(const char *str);
int		ft_atoi(const char *str);
t_philo	*ft_add_philo(int id, t_data *data);
void	ft_error_msg(char *str);
long	ft_get_time(long	t0);
void	*ft_only_one_philo(void	*ptr);
void	ft_init(int	argc, char *argv[], t_data	*data);
void	ft_create_philo(t_data	*data);
void	ft_join_threads(t_data	*data);
void	ft_create_threads(t_data *data);
void	ft_generate_forks(t_data *data);
void	ft_create_mutexes(t_data *data);
void	ft_destroy_mutex(pthread_mutex_t *mutex);
void	ft_lock_mutex(pthread_mutex_t *mutex);
void	ft_unlock_mutex(pthread_mutex_t *mutex);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	ft_write_logs(int	id, char *log, t_data *data);
void	ft_lock_forks(int *right, int *left, t_data *data, t_philo *philo);


#endif