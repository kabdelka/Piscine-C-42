/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdelka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 22:07:33 by sabdelka          #+#    #+#             */
/*   Updated: 2019/09/18 23:08:06 by sabdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		ft_is_charset(char *str, char to_find)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == to_find)
			return (1);
		i++;
	}
	return (0);
}

char	*my_copyss(char *dest, char *src, int start, int stop)
{
	int i;

	i = 0;
	while (start + i < stop)
	{
		dest[i] = src[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_size(char *str, char *charset)
{
	int i;
	int size_tab;

	i = 0;
	size_tab = 0;
	while (str[i])
	{
		if (!(ft_is_charset(charset, str[i])))
			size_tab++;
		while (!ft_is_charset(charset, str[i]) && str[i])
			i++;
		while (ft_is_charset(charset, str[i]) && str[i])
			i++;
	}
	return (size_tab);
}

char	**ft_init_tab(int size)
{
	char	**hbibna;

	if (!(hbibna = malloc(sizeof(char *) * (size + 1))))
		return (NULL);
	hbibna[size] = NULL;
	return (hbibna);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		len;
	char	**hbibna;

	i = 0;
	j = 0;
	hbibna = ft_init_tab(ft_size(str, charset));
	while (str[i])
	{
		len = 0;
		while (!ft_is_charset(charset, str[i + len]) && str[i + len])
			len++;
		if (len)
		{
			if (!(hbibna[j] = (char*)malloc(sizeof(char) * (len + 1))))
				return (NULL);
			hbibna[j] = my_copyss(hbibna[j], str, i, i + len);
			j++;
		}
		while (ft_is_charset(charset, str[i + len]))
			i++;
		i = i + len;
	}
	return (hbibna);
}
