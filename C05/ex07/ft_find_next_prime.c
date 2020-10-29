/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arita <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 08:28:08 by arita             #+#    #+#             */
/*   Updated: 2020/10/24 17:24:49 by arita            ###   ########lyon.fr   */
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

int		ft_find_next_prime(int nb)
{
	int i;

	i = nb - 1;
	if (nb < 2)
	{
		return (0);
	}
	if (ft_is_prime(nb) == 1)
		return (nb);
	else
	{
		while (i > 1)
		{
			if ((nb % i) == 0)
			{
				nb++;
			}
			else
			{
				i--;
			}
		}
		return (nb);
	}
}
