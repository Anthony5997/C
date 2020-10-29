/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arita <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 08:49:54 by arita             #+#    #+#             */
/*   Updated: 2020/10/28 10:55:45 by arita            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int rangeleng;

	i = 0;
	rangeleng = max - min;
	*range = malloc(sizeof(int) * (max - min));
	if (range == NULL)
	{
		return (0);
	}
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	while (min < max)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	return (rangeleng);
}
