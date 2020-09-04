/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdelka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 05:06:13 by sabdelka          #+#    #+#             */
/*   Updated: 2019/09/18 05:06:21 by sabdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *dest, char *src)
{
	int i;

	i = 0;
	if (!(dest = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1))))
		return (NULL);
	dest[ft_strlen(src)] = '\0';
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int argc, char **argv)
{
	int					i;
	struct s_stock_str	*tab;

	i = -1;
	tab = malloc(sizeof(struct s_stock_str) * (argc + 1));
	if (tab == NULL)
		return (NULL);
	tab[argc].str = 0;
	while (++i < argc)
	{
		tab[i].size = ft_strlen(argv[i]);
		tab[i].str = argv[i];
		tab[i].copy = ft_strdup(tab[i].copy, argv[i]);
	}
	return (tab);
}
