/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_start_simulation.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 09:25:01 by ceatgie           #+#    #+#             */
/*   Updated: 2022/09/21 10:44:48 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

static int  ft_check_if_philo_die(t_data *data)
{
    int var;

    ft_lock_mutex(&data->check_end);
    var = data->end;
    ft_unlock_mutex(&data->check_end);
    if (var > 0)
        return (0);
    return (1);
}

void    *ft_start_simulation(void *ptr)
{
    t_data  *data;
    t_philo *philo;
    
    philo = (t_philo *)ptr;
    data = philo->data;
    if (philo->philo_id % 2 != 0)
        ft_usleep(10);
    while (ft_check_if_philo_die(data))
    {
        ft_eat(data, philo);
        if (philo->everyone_has_eaten)
            break;
        ft_write_logs(philo->philo_id, SLEEPING, data);
        ft_usleep(data->time_to_sleep);
        ft_write_logs(philo->philo_id, THINKING, data);
    }
    return (NULL);
}