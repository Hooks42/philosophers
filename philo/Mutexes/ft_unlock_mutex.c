/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unlock_mutex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:05:21 by ceatgie           #+#    #+#             */
/*   Updated: 2022/09/26 09:57:16 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

/*
**	Unlock the given mutex
*/

void	ft_unlock_mutex(pthread_mutex_t *mutex)
{
	if (pthread_mutex_unlock(mutex))
		ft_error_msg(UNLOCK_MUTEX_ERROR);
}
