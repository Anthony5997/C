/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arita <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 13:31:09 by arita             #+#    #+#             */
/*   Updated: 2020/10/23 13:45:42 by arita            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int sign;
	int nb;

	sign = 1;
	i = 0;
	while (str[i] == 32 || ((str[i] >= 9 && str[i] <= 13) && str[i] != '\0'))
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign = sign * -1;
		}
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	return (sign * nb);
}

#include <stdio.h>

int main(void)
{
	char str[] = "	 	 		 ----+----+-+78456";
	printf("%d", ft_atoi(str));
}
