/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdelka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 12:42:22 by sabdelka          #+#    #+#             */
/*   Updated: 2019/09/18 01:19:28 by sabdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int *tab;
	int len;
	int i;

	if (min >= max)
	{
		tab = NULL;
		return (0);
	}
	i = 0;
	len = max - min;
	if (!(tab = malloc(sizeof(*tab) * (len + 1))))
		return (0);
	while (i < len)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
