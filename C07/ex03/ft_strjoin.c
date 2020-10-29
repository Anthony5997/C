/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arita <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 10:09:56 by arita             #+#    #+#             */
/*   Updated: 2020/10/28 11:42:29 by arita            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		lenght;

	i = 0;
	lenght = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[lenght + i] = src[i];
		i++;
	}
	dest[lenght + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		leng;
	char	*str;

	i = 0;
	leng = 0;
	while (i < size)
		leng += ft_strlen(strs[i++]);
	if (size > 1)
		leng += ft_strlen(sep) * (size - 1);
	str = malloc(sizeof(char) * leng + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	str[0] = '\0';
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
		{
			ft_strcat(str, sep);
		}
		i++;
	}
	return (str);
}
