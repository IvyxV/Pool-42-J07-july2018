/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viboujem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 16:52:35 by viboujem          #+#    #+#             */
/*   Updated: 2018/07/23 23:44:04 by viboujem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*rng;
	int		i;

	i = 0;
	if (min >= max)
		return (0);
	rng = (int*)malloc(sizeof(*rng) * (max - min));
	while (min + i < max)
	{
		rng[i] = min + i;
		i++;
	}
	return (rng);
}
