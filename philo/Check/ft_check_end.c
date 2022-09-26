/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_end.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 09:53:36 by ceatgie           #+#    #+#             */
/*   Updated: 2022/09/21 17:05:37 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

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
