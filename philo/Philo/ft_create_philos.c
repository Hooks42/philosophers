/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_philos.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 14:11:12 by ceatgie           #+#    #+#             */
/*   Updated: 2022/09/26 09:33:49 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

/*
**	If the number of philosophers requested is 1
**	then we set the time to 0
**	then we create a single thread which performs the function 
**	ft_only_one_philo
**	
**	=========================================================================
**	
**	Otherwise, as long as all the philosophers asked have not been created,
**	we create them. 
**	We then create the mutexes and the threads
*/

void	ft_create_philos(t_data	*data)
{
	t_philo	*philo;
	t_philo	*begin_list;
	int		id;

	if (data->nb_philo == 1)
	{
		data->philo = ft_add_philo(1, data);
		data->t0 = ft_get_time(0);
		if (pthread_create(&(data->philo->thread), NULL,
				ft_only_one_philo, data->philo))
			ft_error_msg(THREAD_ERROR);
		return ;
	}
	philo = ft_add_philo(1, data);
	begin_list = philo;
	id = 1;
	while (++id <= data->nb_philo)
	{
		philo->next = ft_add_philo(id, data);
		philo = philo->next;
	}
	philo->next = begin_list;
	data->philo = begin_list;
	ft_create_mutexes(data);
	ft_create_threads(data);
}
