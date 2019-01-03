/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viboujem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 17:13:34 by viboujem          #+#    #+#             */
/*   Updated: 2018/07/24 23:28:27 by viboujem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;

	i = 0;
	if (min >= max)
		return (0);
	range[0] = (int*)malloc(sizeof(int) * (max - min));
	if (range[0] == NULL)
		return (0);
	while (min < max)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	return (i);
}
