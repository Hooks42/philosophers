/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generate_forks.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:55:50 by ceatgie           #+#    #+#             */
/*   Updated: 2022/10/05 14:55:00 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

/*
**	Create the mutex for the forks associated to each philo
*/

void	ft_generate_forks(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->nb_philo)
	{
		if (pthread_mutex_init(&(data->fork[i]), NULL))
			ft_error_msg(MUTEX_ERROR);
		data->philo = data->philo->next;
		i++;
	}
}
