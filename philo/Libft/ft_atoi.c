/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 09:06:55 by ceatgie           #+#    #+#             */
/*   Updated: 2022/10/05 14:48:59 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

/*
**	Convert String to Int
*/

static int	ft_isspace(const char *str)
{
	int	cpt;

	cpt = 0;
	while (str[cpt] == ' ' || str[cpt] == '\f'
		|| str[cpt] == '\t' || str[cpt] == '\n'
		|| str[cpt] == '\r' || str[cpt] == '\v')
		cpt++;
	return (cpt);
}

int	ft_atoi(const char *str)
{
	int		sign;
	int		cpt;
	int		atoi_var;

	sign = 1;
	atoi_var = 0;
	cpt = ft_isspace(str);
	if (str[cpt] == '-' || str[cpt] == '+')
		if (str[cpt++] == '-')
			sign *= -1;
	while (str[cpt] >= '0' && str[cpt] <= '9')
	{
		atoi_var *= 10;
		atoi_var += str[cpt] - '0';
		cpt++;
	}
	return (atoi_var *= sign);
}
