/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arita <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 18:07:32 by arita             #+#    #+#             */
/*   Updated: 2020/10/25 09:50:49 by arita            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int carre;
	int nbmax;

	nbmax = nb / 2 + 1;
	carre = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nbmax > 46340)
	{
		nbmax = 46340;
	}
	while (carre <= nbmax)
	{
		if (carre * carre == nb)
		{
			return (carre);
		}
		carre++;
	}
	return (0);
}
