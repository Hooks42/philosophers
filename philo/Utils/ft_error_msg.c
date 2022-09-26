/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_msg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:58:24 by ceatgie           #+#    #+#             */
/*   Updated: 2022/09/21 17:38:32 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

void	ft_error_msg(char *str)
{
	write(2, RED, ft_strlen(RED));
	write(2, "Error\n", 7);
	write(2, RESET, 4);
	write(2, str, ft_strlen(str));
	exit(EXIT_FAILURE);
}
