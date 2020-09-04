/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdelka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 04:45:28 by sabdelka          #+#    #+#             */
/*   Updated: 2019/09/19 05:50:18 by sabdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	my_putchar(char c)
{
	write(1, &c, 1);
}

void	my_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		my_putchar(str[i]);
		i++;
	}
}

void	my_putnbr(int nb)
{
	unsigned int nbr;

	nbr = nb;
	if (nb < 0)
	{
		my_putchar('-');
		nbr = nb * (-1);
	}
	if (nbr / 10 > 0)
		my_putnbr(nbr / 10);
	my_putchar(nbr % 10 + '0');
}

void	ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str)
	{
		my_putstr(par[i].str);
		my_putchar('\n');
		my_putnbr(par[i].size);
		my_putchar('\n');
		my_putstr(par[i].copy);
		my_putchar('\n');
		i++;
	}
}
