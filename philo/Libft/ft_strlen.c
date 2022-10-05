/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 08:39:00 by ceatgie           #+#    #+#             */
/*   Updated: 2022/10/05 14:49:39 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

/*
**	Calculate lengh of the given string
*/

size_t	ft_strlen(const char *str)
{
	size_t	cpt;

	cpt = 0;
	while (str[cpt])
		cpt++;
	return (cpt);
}
