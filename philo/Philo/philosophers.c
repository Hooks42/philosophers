/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:27:51 by ceatgie           #+#    #+#             */
/*   Updated: 2022/09/19 16:42:51 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

void	philosophers(int argc, char *argv[])
{
	t_data	*data;

	data = malloc(sizeof(t_data));
	if (argc < 5 || argc > 6)
		ft_error_message();
	ft_parse_input(argv);
	ft_init(argc, argv, data);
	if (data->nb_philo == 1)
	{		
		if (pthread_join(data->philo->thread, NULL))
			ft_error_msg(JOIN_THREAD_ERROR);
		return ;
	}
}