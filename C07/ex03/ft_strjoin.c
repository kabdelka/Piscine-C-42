/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdelka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 02:16:53 by sabdelka          #+#    #+#             */
/*   Updated: 2019/09/19 02:29:10 by sabdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		my_len(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_get_size(int size, char **strs, char *sep)
{
	int i;
	int sum;

	sum = 0;
	i = 0;
	while (i < size)
	{
		sum = sum + my_len(strs[i]);
		i++;
	}
	sum = sum + (my_len(sep) * (size - 1));
	return (sum);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	char	*hbibna;

	i = 0;
	j = ft_get_size(size, strs, sep);
	if (size == 0)
		j = 0;
	if (!(hbibna = malloc(sizeof(char) * (j + 1))))
		return (NULL);
	*hbibna = '\0';
	while (size > i)
	{
		hbibna = ft_strcat(hbibna, strs[i]);
		if (!(i + 1 == size))
			hbibna = ft_strcat(hbibna, sep);
		i++;
	}
	return (hbibna);
}
