/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing_manager.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:57:07 by ceatgie           #+#    #+#             */
/*   Updated: 2022/10/05 15:05:08 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

/*
**	Calls every parsing function
*/

void	ft_parsing_manager(int argc, char *argv[])
{
	if (argc < 5 || argc > 6)
		ft_error_message();
	ft_check_if_not_number(argv);
	ft_check_if_not_null_string(argv);
}
