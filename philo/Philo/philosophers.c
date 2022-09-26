/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:27:51 by ceatgie           #+#    #+#             */
/*   Updated: 2022/09/21 18:17:36 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

/*
**	Calls all the functions 
**	needed by the program
*/

void	philosophers(int argc, char *argv[])
{
	t_data	data;

	if (argc < 5 || argc > 6)
		ft_error_message();
	ft_parse_input(argv);
	ft_init(argc, argv, &data);
	ft_join_threads(&data);
	ft_usleep(10);
	ft_end_simulation(&data);
}
