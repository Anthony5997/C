/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arita <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 13:11:49 by arita             #+#    #+#             */
/*   Updated: 2020/10/23 13:24:22 by arita            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

#include <stdio.h>

int main(void)
{
	char s1[] = "salut salut";
	char s2[] = "saut salut";

	printf("%d", ft_strcmp(s1, s2));
}
