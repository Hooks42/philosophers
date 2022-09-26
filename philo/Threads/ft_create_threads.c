/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_threads.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:50:19 by ceatgie           #+#    #+#             */
/*   Updated: 2022/09/26 10:09:23 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

/*
**	init the time t0 when creating threads then create as many threads 
**	as there are philosophers which launches the function ft_start_simulation
**	
**	==========================================================================
**	
**	Create another thread which will launch the ft_check_end function which
**	monitors whether the simulation is going well
*/

void	ft_create_threads(t_data *data)
{
	int	i;

	i = 0;
	data->t0 = ft_get_time(0);
	while (i < data->nb_philo)
	{
		if (pthread_create(&(data->philo->thread), NULL,
				ft_start_simulation, data->philo))
			ft_error_msg(THREAD_ERROR);
		data->philo = data->philo->next;
		i++;
	}
	if (pthread_create(&(data->thread), NULL, ft_check_end, data))
		ft_error_msg(THREAD_ERROR);
}
