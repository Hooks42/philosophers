/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_end_simulation.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 09:58:02 by ceatgie           #+#    #+#             */
/*   Updated: 2022/09/21 10:57:24 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

void    ft_end_simulation(t_data *data)
{
    t_philo *philo;
    int     i;

    if (data->nb_philo == 1)
    {
        free(data->philo);
        return ;
    }
    i = 0;
    while (i <= data->nb_philo)
    {
        philo = data->philo->next;
        pthread_mutex_destroy(&(data->fork[i]));
        free(data->philo);
        data->philo = philo;
        i++;
    }
    free(data->fork);
    ft_destroy_mutex(&data->logs);
    ft_destroy_mutex(&data->check_end);
    ft_destroy_mutex(&data->check_last_meal);
    ft_destroy_mutex(&data->check_everyone_has_eaten);
}