/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:27:51 by ceatgie           #+#    #+#             */
/*   Updated: 2022/10/03 09:49:06 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

/*
**	Calls all the functions needed by the program
**	
**	=================================================
**	
**	Check if there is the right number of arguments
**	Then check if there is no error in the input
**	Then initialize the data structure
**	Then join the threads
**	Wait for 10 milliseconds
**	end up ending the simulation
*/

void	philosophers(int argc, char *argv[])
{
	t_data	data;

	if (argc < 5 || argc > 6)
		ft_error_message();
	ft_check_if_not_number(argv);
	ft_check_if_not_null_string(argv);
	ft_init(argc, argv, &data);
	ft_join_threads(&data);
	ft_usleep(10);
	ft_end_simulation(&data);
}
