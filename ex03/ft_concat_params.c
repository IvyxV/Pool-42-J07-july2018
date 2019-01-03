/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viboujem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 17:29:40 by viboujem          #+#    #+#             */
/*   Updated: 2018/07/23 16:27:56 by viboujem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count_arg(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (j < argc)
	{
		while (argv[j][i] != '\0')
		{
			k++;
			i++;
		}
		i = 0;
		k++;
		j++;
	}
	k = k + argc;
	return (k);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	j = 1;
	k = 0;
	str = (char*)malloc(sizeof(*str) * count_arg(argc, argv));
	while (j < argc)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			str[k] = argv[j][i];
			i++;
			k++;
		}
		j++;
		if (j != argc)
			str[k] = '\n';
		else
			str[k] = '\0';
		k++;
	}
	return (str);
}
