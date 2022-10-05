/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_msg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:58:24 by ceatgie           #+#    #+#             */
/*   Updated: 2022/10/05 15:37:03 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

/*
**	Write the given error in red
*/

void	ft_error_msg(char *str)
{
	write(2, RED, ft_strlen(RED));
	write(2, "Error: ", 7);
	write(2, str, ft_strlen(str));
	write(2, RESET, 4);
	exit(EXIT_FAILURE);
}
