/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:45:04 by ceatgie           #+#    #+#             */
/*   Updated: 2022/09/21 17:09:35 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

void	ft_parse_input(char *argv[])
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (argv[i])
	{
		while (argv[i][j])
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
			{
				write(2, RED, ft_strlen(RED));
				ft_putstr_fd("Error: Please write only number in the ", 2);
				ft_putstr_fd("program input\n", 2);
				exit(ERROR_ARGV);
			}
			j++;
		}
		j = 0;
		i++;
	}
}
