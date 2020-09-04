/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdelka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 12:20:15 by sabdelka          #+#    #+#             */
/*   Updated: 2019/09/07 12:41:15 by sabdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

char	*ft_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int mi;

	i = 0;
	ft_lowercase(str);
	mi = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (mi == 1)
			{
				str[i] = str[i] - 32;
				mi = 0;
			}
		}
		else if (str[i] >= 48 && str[i] <= 57)
			mi = 0;
		else if (!(str[i] >= 97 && str[i] <= 122) ||
				!(str[i] >= 48 && str[i] <= 57))
			mi = 1;
		i++;
	}
	return (str);
}
