/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arita <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 18:03:48 by arita             #+#    #+#             */
/*   Updated: 2020/10/24 19:11:23 by arita            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strrev(char *str)
{
	int leng;

	leng = ft_strlen(str) - 1;
	while (leng >= 0)
	{
		write(1, &str[leng], 1);
		leng--;
	}
	return (str);
}

int		main(void)
{
	char str[] = "yolo";

	ft_strrev(str);


}
