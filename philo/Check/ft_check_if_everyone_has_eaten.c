/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_if_everyone_has_eaten.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 09:48:11 by ceatgie           #+#    #+#             */
/*   Updated: 2022/09/26 11:53:47 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

/*
**	Return 1 or 0 if everyone got all their meal
**	Check if everyone_has_eaten var equal the nb of phil0
*/

int	ft_check_if_everyone_has_eaten(t_data *data)
{
	int	var;

	ft_lock_mutex(&data->check_everyone_has_eaten);
	var = data->everyone_has_eaten;
	ft_unlock_mutex(&data->check_everyone_has_eaten);
	if (var == data->nb_philo)
		return (1);
	return (0);
}
