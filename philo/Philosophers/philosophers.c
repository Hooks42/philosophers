/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:27:51 by ceatgie           #+#    #+#             */
/*   Updated: 2022/10/05 15:54:57 by ceatgie          ###   ########.fr       */
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
**	Then ending the simulation
*/

void	philosophers(int argc, char *argv[])
{
	t_data	data;

	ft_parsing_manager(argc, argv);
	ft_init(argc, argv, &data);
	ft_create_philos(&data);
	ft_join_threads(&data);
	ft_end_simulation(&data);
}
