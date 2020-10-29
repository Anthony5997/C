/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arita <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 10:27:15 by arita             #+#    #+#             */
/*   Updated: 2020/10/23 11:01:33 by arita            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int		temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size / 2)
	{
		ft_swap(&tab[i], &tab[(size - i) - 1]);
		i++;
	}
}

#include <stdio.h>

int main(void)
{
	int tab[8] = {0,2,5,6,7,4,8,9};
	int i;

	i = 0;
	ft_rev_int_tab(&tab[i], 8);
	while (i < 8)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}
