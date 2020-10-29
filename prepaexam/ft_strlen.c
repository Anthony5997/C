/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_strlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arita <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 16:11:50 by arita             #+#    #+#             */
/*   Updated: 2020/10/16 16:33:45 by arita            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		ft_strlen(char *str){

	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
int main(void)
{
	char str[] = " Salut ldfvjovndbovdnva sauce ";

	printf("%d\n",ft_strlen(str));

}
