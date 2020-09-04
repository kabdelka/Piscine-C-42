/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdelka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 16:39:26 by sabdelka          #+#    #+#             */
/*   Updated: 2019/09/09 15:17:58 by sabdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int x;

	i = 0;
	x = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[x] != '\0' && x < nb)
	{
		dest[i + x] = src[x];
		x++;
	}
	dest[i + x] = '\0';
	return (dest);
}

int main ()
{
	char dest[50] = "Destination";
	char src[] = "sources";
	char dest1[50] = "Destination";
	char src1[] = "sources";
	unsigned int nb = 4;
	printf("%s", ft_strncat(dest, src, nb));
	printf("\n");
	printf("%s", strncat(dest1, src1, nb));
	return 0;
}
