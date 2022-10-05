/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_end.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 09:53:36 by ceatgie           #+#    #+#             */
/*   Updated: 2022/10/05 14:43:15 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

/*
**	Function used by the thread which monitors the simulation. Calls
**	The functions ft_check_if_everyone_has_eaten and ft_check_if_dead
**	Which check the two conditions which stop the simulation
*/

void	*ft_check_end(void *ptr)
{
	t_data				*data;
	t_philo				*philo;

	data = (t_data *)ptr;
	philo = data->philo;
	while (!(ft_check_if_everyone_has_eaten(data)
			|| ft_check_if_dead(data, philo)))
	{
		philo = philo->next;
	}
	return (NULL);
}
