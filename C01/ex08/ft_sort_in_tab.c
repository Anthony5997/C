/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_in_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arita <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 14:43:49 by arita             #+#    #+#             */
/*   Updated: 2020/10/13 20:31:52 by arita            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	d;

	i = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1] && i + 1 < size)
		{
			d = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = d;
			i = 0;
		}
		else
			i++;
	}
}
