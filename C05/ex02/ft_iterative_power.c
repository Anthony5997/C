/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arita <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 16:03:02 by arita             #+#    #+#             */
/*   Updated: 2020/10/24 17:14:26 by arita            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int puissance;

	puissance = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	while (power > 0)
	{
		puissance = nb * puissance;
		power--;
	}
	return (puissance);
}
