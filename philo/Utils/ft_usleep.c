/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usleep.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:20:18 by ceatgie           #+#    #+#             */
/*   Updated: 2022/10/05 15:39:41 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

/*
**	Convert usleep in milliseconds
*/

void	ft_usleep(long time)
{
	long	t;

	t = ft_get_time(0) + time;
	while (ft_get_time(0) < t)
		usleep(10);
}
