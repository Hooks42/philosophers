/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy_mutex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:02:52 by ceatgie           #+#    #+#             */
/*   Updated: 2022/09/19 17:03:44 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

void	ft_destroy_mutex(pthread_mutex_t *mutex)
{
	if (pthread_mutex_destroy(mutex))
		ft_error_msg(DESTROY_MUTEX_ERROR);
}