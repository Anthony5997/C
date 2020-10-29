/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arita <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 12:13:14 by arita             #+#    #+#             */
/*   Updated: 2020/10/16 12:06:57 by arita            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	strtolower(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	strtolower(str);
	while (str[i] != '\0')
	{
		if ((i == 0 || (str[i - 1] >= 0 && str[i - 1] <= 47) ||
		(str[i - 1] >= 32 && str[i - 1] <= 47) ||
		(str[i - 1] >= 58 && str[i - 1] <= 64) ||
		(str[i - 1] >= 91 && str[i - 1] <= 96) ||
		(str[i - 1] >= 123 && str[i - 1] <= 126)) &&
		(str[i] >= 97 && str[i] <= 122))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
