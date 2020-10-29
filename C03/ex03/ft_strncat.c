/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arita <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 11:21:24 by arita             #+#    #+#             */
/*   Updated: 2020/10/19 15:12:17 by arita            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				lenght;

	i = 0;
	lenght = ft_strlen(dest);
	while ((src[i] != '\0') && (i < nb))
	{
		dest[lenght + i] = src[i];
		i++;
	}
	dest[lenght + i] = '\0';
	return (dest);
}
