/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_if_dead.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 09:39:03 by ceatgie           #+#    #+#             */
/*   Updated: 2022/10/03 13:01:30 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

/*
**	Return 1 or 0 if someone die
**	Si la date de son dernier repas est superieur au temps qu'il lui faut
**	Pour mourir sans manger alors le philosopher meurt
*/

int	ft_check_if_dead(t_data *data, t_philo *philo)
{
	long	lastmeal;
	int		philo_id;

	philo_id = philo->philo_id;
	ft_lock_mutex(&data->check_last_meal);
	lastmeal = philo->last_meal;
	ft_unlock_mutex(&data->check_last_meal);
	if (lastmeal && (ft_get_time(data->t0) - lastmeal) > data->time_to_die)
	{
		ft_lock_mutex(&data->print);
		printf("%s%li ms%s | %sPhilo %i %s\n", BLUE,
			ft_get_time(data->t0), RESET, RED, philo_id, DIED);
		ft_unlock_mutex(&data->print);
		ft_lock_mutex(&data->check_end);
		data->end = 1;
		ft_unlock_mutex(&data->check_end);
		return (1);
	}
	return (0);
}
