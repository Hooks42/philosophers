/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_time.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:55:51 by ceatgie           #+#    #+#             */
/*   Updated: 2022/09/21 17:38:30 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

long	ft_get_time(long t0)
{
	struct timeval	time;

	if (gettimeofday(&time, NULL))
		ft_error_msg(TIME_ERROR);
	return ((time.tv_sec * 1000 + time.tv_usec / 1000) - t0);
}
