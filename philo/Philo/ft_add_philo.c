/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_philo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 14:14:45 by ceatgie           #+#    #+#             */
/*   Updated: 2022/09/21 11:20:33 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

t_philo	*ft_add_philo(int id, t_data *data)
{
	t_philo	*philo;

	philo = malloc(sizeof(t_philo) * 1);
	if (!philo)
		ft_error_msg(MALLOC_ERROR);
	philo->philo_id = id;
	philo->has_eaten = 0;
	philo->last_meal = 0;
	philo->everyone_has_eaten = 0;
	philo->next = NULL;
	philo->data = data;
	return (philo);
}