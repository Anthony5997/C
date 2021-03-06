/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arita <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 08:15:46 by arita             #+#    #+#             */
/*   Updated: 2020/10/24 17:19:25 by arita            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = nb - 1;
	if (nb < 2)
	{
		return (0);
	}
	while (i > 1)
	{
		if ((nb % i) == 0)
		{
			return (0);
		}
		else
		{
			i--;
		}
	}
	return (1);
}
