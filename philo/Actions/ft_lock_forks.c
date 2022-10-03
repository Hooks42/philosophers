/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lock_forks.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:40:45 by ceatgie           #+#    #+#             */
/*   Updated: 2022/10/03 11:30:38 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

/*
**	Function which is used for a philosopher to take the two forks to eat
*/

void	ft_lock_forks(int *right, int *left, t_data *data, t_philo *philo)
{
	*right = philo->philo_id;
	*left = philo->philo_id - 1;
	if (philo->philo_id == data->nb_philo)
	{
		*right = *left;
		*left = 0;
	}
	ft_lock_mutex(&(data->fork[*right]));
	ft_write_logs(philo->philo_id, R_FORK_TAKEN, data);
	ft_lock_mutex(&(data->fork[*left]));
	ft_write_logs(philo->philo_id, L_FORK_TAKEN, data);
}
