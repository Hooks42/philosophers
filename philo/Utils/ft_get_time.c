/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_time.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:55:51 by ceatgie           #+#    #+#             */
/*   Updated: 2022/09/26 09:23:42 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

/*
**	get the current time in ms to associate it with t0
*/

long	ft_get_time(long t0)
{
	struct timeval	time;

	if (gettimeofday(&time, NULL))
		ft_error_msg(TIME_ERROR);
	return ((time.tv_sec * 1000 + time.tv_usec / 1000) - t0);
}
