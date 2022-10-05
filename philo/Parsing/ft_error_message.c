/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_message.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:41:50 by ceatgie           #+#    #+#             */
/*   Updated: 2022/10/05 15:47:16 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

/*
**	Writes how to run the program
**	if there are too many or too few arguments
*/
void	ft_error_message(void)
{
	write(2, RED, ft_strlen(RED));
	ft_putstr_fd("Error: Program starts like this:\n\n", 2);
	write(2, RESET, ft_strlen(RESET));
	write(2, BLUE, ft_strlen(BLUE));
	ft_putstr_fd("./philosophers <number of philosopher> <time to die> ", 2);
	ft_putstr_fd("<time to eat> <time_to_sleep>\n\n", 2);
	write(2, RESET, ft_strlen(RESET));
	write(2, GREEN, ft_strlen(GREEN));
	ft_putstr_fd("If you like you can add: <number of time each ", 2);
	ft_putstr_fd("philosopher must eat>\n", 2);
	write(2, RESET, ft_strlen(RESET));
	exit(EXIT_FAILURE);
}
