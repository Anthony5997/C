/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only_z.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arita <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 11:29:26 by arita             #+#    #+#             */
/*   Updated: 2020/10/23 13:11:20 by arita            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	(void)	argc;
	int		i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
