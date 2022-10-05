/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:59:34 by ceatgie           #+#    #+#             */
/*   Updated: 2022/10/05 15:54:41 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

/*
**	Initializes the entire data structure and
**	calls the philosophers creation function
*/

void	ft_init(int argc, char *argv[], t_data *data)
{
	data->argc = argc;
	data->argv = argv;
	data->nb_philo = ft_atoi(data->argv[1]);
	data->time_to_eat = ft_atoi(data->argv[3]);
	data->time_to_sleep = ft_atoi(data->argv[4]);
	data->time_to_die = ft_atoi(data->argv[2]);
	data->everyone_has_eaten = 0;
	data->end = 0;
	data->meal_number = 0;
	data->t0 = 0;
	if (data->argv[5])
		data->meal_number = ft_atoi(data->argv[5]);
}
