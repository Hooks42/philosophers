/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:39:03 by ceatgie           #+#    #+#             */
/*   Updated: 2022/09/19 17:52:17 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

void	ft_eat(t_data *data, t_philo *philo)
{
	int	right;
	int	left;

	ft_lock_forks(&right, &left, data, philo);
	ft_lock_mutex(&(data->check_last_meal));
	philo->last_meal = ft_get_time(data->t0);
	unlock_mutex(&(data->check_last_meal));
	ft_write_logs(philo->philo_id, EATING, data);
	ft_usleep(data->time_to_eat);
	ft_unlock_mutex(&(data->fork[right]));
	ft_unlock_mutex(&(data->fork[left]));
	philo->has_eaten++;
	if (data->meal_number && data->meal_number == philo->has_eaten)
	{
		philo->has_eaten = 1;
		ft_lock_mutex(&data->check_everyone_has_eaten);
		data->everyone_has_eaten++;
		ft_unlock_mutex(&data->check_everyone_has_eaten);
	}
}