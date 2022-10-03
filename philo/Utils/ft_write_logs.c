/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_logs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:07:54 by ceatgie           #+#    #+#             */
/*   Updated: 2022/10/03 11:30:42 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

void	ft_write_logs(intz id, char *log, t_data *data)
{
	int		i;
	char	*color;

	ft_lock_mutex(&data->logs);
	color = YELLOW;
	if (!ft_strncmp(log, DIED, ft_strlen(log)))
		color = RED;
	if (!ft_strncmp(log, EATING, ft_strlen(log)))
		color = GREEN;
	ft_lock_mutex(&data->check_end);
	i = data->end;
	ft_unlock_mutex(&data->check_end);
	if (i)
	{
		ft_unlock_mutex(&data->logs);
		return ;
	}
	printf("%s%li ms%s | %sPhilo %i %s\n", BLUE, ft_get_time(data->t0),
		RESET, color, id, log);
	printf(RESET);
	ft_unlock_mutex(&data->logs);
}
