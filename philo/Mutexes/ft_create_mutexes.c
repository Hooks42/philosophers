/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_mutexes.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:58:46 by ceatgie           #+#    #+#             */
/*   Updated: 2022/09/19 17:01:51 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

void	ft_create_mutexes(t_data *data)
{
	data->fork = malloc(sizeof(pthread_mutex_t) * data->nb_philo);
	if (!data->fork)
		ft_error_msg(MALLOC_ERROR);
	ft_generate_forks(data);
	if (pthread_mutex_init(&(data->logs), NULL))
		ft_error_msg(MUTEX_ERROR);
	if (pthread_mutex_init(&(data->check_end), NULL))
		ft_error_msg(MUTEX_ERROR);
	if (pthread_mutex_init(&(data->check_last_meal), NULL))
		ft_error_msg(MUTEX_ERROR);
	if (pthread_mutex_init(&(data->check_everyone_has_eaten), NULL))
		ft_error_msg(MUTEX_ERROR);
	
}