/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy_mutex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:02:52 by ceatgie           #+#    #+#             */
/*   Updated: 2022/09/26 09:56:16 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

/*
**	Destroy the given mutex
*/

void	ft_destroy_mutex(pthread_mutex_t *mutex)
{
	if (pthread_mutex_destroy(mutex))
		ft_error_msg(DESTROY_MUTEX_ERROR);
}
