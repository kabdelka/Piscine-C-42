/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdelka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 19:33:30 by sabdelka          #+#    #+#             */
/*   Updated: 2019/09/19 01:34:06 by sabdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*hbibna;
	int		c;

	c = 0;
	while (src[c])
		c++;
	if (!(hbibna = malloc(sizeof(*hbibna) * (c + 1))))
		return (NULL);
	c = 0;
	while (src[c] != '\0')
	{
		hbibna[c] = src[c];
		c++;
	}
	hbibna[c] = '\0';
	return (hbibna);
}
