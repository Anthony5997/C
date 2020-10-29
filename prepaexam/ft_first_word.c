/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arita <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 14:45:54 by arita             #+#    #+#             */
/*   Updated: 2020/10/28 16:01:44 by arita            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_first_word(char *str)
{
	int i;

	i = 0;
	while (!str[i] && (str[i] == ' ' || str[i] == '\t'))
	{
		i++;
	}
	while (str[i] != ' ' || str[i] != '\t')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if(argc == 2)
	{
		ft_first_word(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
