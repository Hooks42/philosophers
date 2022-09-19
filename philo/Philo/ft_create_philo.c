/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_philo.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 14:11:12 by ceatgie           #+#    #+#             */
/*   Updated: 2022/09/19 16:30:28 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

void	ft_create_philo(t_data	*data)
{
	t_philo	*philo;
	t_philo	*begin_list;
	int		id;

	if (data->nb_philo == 1)
	{
		data->philo = ft_add_philo(1, data);
		data->t0 = ft_get_time(0);
		if (pthread_create(&(data->philo->thread), NULL, ft_only_one_philo, data->philo))
			ft_error_msg(THREAD_ERROR);
		return ;
	}
	philo = ft_add_philo(1, data);
	begin_list = philo;
	id = 2;
	while (id <= data->nb_philo)
	{
		philo->next = ft_add_philo(id, data);
		philo = philo->next;
		id++;
	}
	philo->next = begin_list;
	data->philo = begin_list;
	//create_mutex
	//create_thread
}