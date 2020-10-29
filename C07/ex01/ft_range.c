/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arita <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 08:30:29 by arita             #+#    #+#             */
/*   Updated: 2020/10/28 10:51:39 by arita            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;

	i = 0;
	tab = malloc(sizeof(int) * (max - min));
	if (tab == NULL)
	{
		return (0);
	}
	if (min >= max)
	{
		tab = NULL;
		return (tab);
	}
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
