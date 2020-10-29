/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arita <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 18:38:54 by arita             #+#    #+#             */
/*   Updated: 2020/10/16 12:14:56 by arita            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		if (size > 0 && i < size - 1)
		{
			dest[j] = src[i];
			j++;
		}
		i++;
	}
	if (size > 0)
	{
		dest[j] = '\0';
	}
	return (i);
}
