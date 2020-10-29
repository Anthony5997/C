/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arita <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 10:54:28 by arita             #+#    #+#             */
/*   Updated: 2020/10/13 17:56:54 by arita            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *nb1, int *nb2)
{
	int	i;

	i = *nb1;
	*nb1 = *nb2;
	*nb2 = i;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int i;

	i = 0;
	while (i < size / 2)
	{
		ft_swap(&tab[i], &tab[(size - i) - 1]);
		i++;
	}
}
