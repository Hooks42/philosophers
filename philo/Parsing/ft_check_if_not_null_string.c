/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_if_not_null_string.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 09:22:13 by ceatgie           #+#    #+#             */
/*   Updated: 2022/10/05 15:05:04 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

/*
**	Check if there is a NULL or empty string in input
*/

void	ft_check_if_not_null_string(char *argv[])
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (argv[i][0] == '\0' || !argv[i])
			ft_error_msg("Please don't put null string\n");
		i++;
	}
}
