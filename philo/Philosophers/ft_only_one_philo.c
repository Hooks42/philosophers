/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_only_one_philo.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:22:10 by ceatgie           #+#    #+#             */
/*   Updated: 2022/10/05 15:07:18 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

/*
**	The philosopher takes only one fork
**	Then he wait time_to_time
**	Then he die
*/

void	*ft_only_one_philo(void	*ptr)
{
	t_philo	*philo;
	t_data	*data;

	philo = (t_philo *)ptr;
	data = philo->data;
	printf("%s%li ms%s | %sPhilo %i %s\n", BLUE, ft_get_time(data->t0),
		RESET, YELLOW, 1, R_FORK_TAKEN);
	ft_usleep(data->time_to_die);
	printf("%s%li ms%s | %sPhilo %i %s\n", BLUE, ft_get_time(data->t0),
		RESET, RED, 1, DIED);
	return (NULL);
}
