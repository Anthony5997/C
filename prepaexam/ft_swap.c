/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arita <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 15:56:10 by arita             #+#    #+#             */
/*   Updated: 2020/10/16 16:28:37 by arita            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}

int		main(void)
{
	int a;
	int b;

	a = 45;
	b = 31;
	printf("%d\n%d\n", a, b);
	ft_swap(&a, &b);

	printf("%d\n%d\n", a, b);
}