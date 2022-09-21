/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_if_dead.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 09:39:03 by ceatgie           #+#    #+#             */
/*   Updated: 2022/09/21 10:42:09 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

int ft_check_if_dead(t_data *data, t_philo  *philo)
{
    long    lastmeal;
    
    ft_lock_mutex(&data->check_last_meal);
    lastmeal = philo->last_meal;
    ft_unlock_mutex(&data->check_last_meal);
    if (lastmeal && (ft_get_time(data->t0) - lastmeal) > data->time_to_die)
    {
        printf("%s%li ms%s | %sPhilo %i %s\n", BLUE,
            ft_get_time(data->t0), RESET, RED, philo->philo_id, DIED);
        ft_lock_mutex(&data->check_end);
        data->end = 1;
        ft_unlock_mutex(&data->check_end);
        return (1);
    }
    return (0);
}