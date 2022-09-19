/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_threads.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:50:19 by ceatgie           #+#    #+#             */
/*   Updated: 2022/09/19 16:54:22 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

void	ft_create_threads(t_data *data)
{
	int	i;

	i = 0;
	data->t0 = get_time(0);
	while (i < data->nb_philo)
	{
		if (pthread_create(&(data->philo->thread), NULL, /*routine*/, data->philo))
			ft_error_msg(THREAD_ERROR);
		data->philo = data->philo->next;
		i++;
	}
	if (pthread_create(&(data->thread), NULL, /*check_end*/, data))
		ft_error_msg(THREAD_ERROR);
}