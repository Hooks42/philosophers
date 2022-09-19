/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join_threads.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:45:21 by ceatgie           #+#    #+#             */
/*   Updated: 2022/09/19 16:49:14 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

void	ft_join_threads(t_data	*data)
{
	int	i;

	i = 0;
	if (data->nb_philo == 1)
	{
		if (pthread_join(data->philo->thread, NULL))
			ft_error_msg(JOIN_THREAD_ERROR);
		return ;
	}
	while (i < data->nb_philo)
	{
		if (ptread_join(data->philo->thread, NULL))
			ft_error_msg(JOIN_THREAD_ERROR);
		data->philo = data->philo->next;
		i++;
	}
	if (pthread_join(data->thread, NULL))
		ft_error_msg(JOIN_THREAD_ERROR);
}