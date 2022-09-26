/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_only_one_philo.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:22:10 by ceatgie           #+#    #+#             */
/*   Updated: 2022/09/26 09:31:49 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

/*
**	The philosopher takes only one fork then dies
*/

void	*ft_only_one_philo(void	*ptr)
{
	t_philo	*philo;
	t_data	*data;

	philo = (t_philo *)ptr;
	data = philo->data;
	printf("%s%li ms%s | %sPhilo %i %s\n", BLUE, ft_get_time(data->t0),
		RESET, YELLOW, 1, R_FORK_TAKEN);
	printf("%s%li ms%s | %sPhilo %i %s\n", BLUE, ft_get_time(data->t0),
		RESET, RED, 1, DIED);
	return (NULL);
}
