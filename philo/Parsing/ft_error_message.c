/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_message.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:41:50 by ceatgie           #+#    #+#             */
/*   Updated: 2022/09/14 18:28:19 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

void	ft_error_message(void)
{
	ft_putstr_fd("Error: Program starts like this:\n\n", 2);
	ft_putstr_fd("./philosophers <number of philosopher> <time to eat ", 2);
	ft_putstr_fd("<time to die> <time_to_sleep>\n\n",2);
	ft_putstr_fd("If you like you can add: <number of time each ", 2);
	ft_putstr_fd("philosopher must eat>\n", 2);
	exit(ERROR_ARGC);
}