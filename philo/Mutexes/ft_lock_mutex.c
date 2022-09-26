/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lock_mutex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:04:11 by ceatgie           #+#    #+#             */
/*   Updated: 2022/09/26 09:56:37 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

/*
**	Lock the given mutex
*/

void	ft_lock_mutex(pthread_mutex_t *mutex)
{
	if (pthread_mutex_lock(mutex))
		ft_error_msg(LOCK_MUTEX_ERROR);
}
