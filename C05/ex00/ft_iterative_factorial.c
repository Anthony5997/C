/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arita <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 10:03:57 by arita             #+#    #+#             */
/*   Updated: 2020/10/24 17:10:15 by arita            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int		i;
	int		result;

	result = 1;
	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}
