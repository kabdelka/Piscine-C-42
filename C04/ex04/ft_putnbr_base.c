/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdelka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 11:40:53 by sabdelka          #+#    #+#             */
/*   Updated: 2019/09/19 11:44:13 by sabdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void			ft_putchar(char c)
{
	write(1, &c, 1);
}

int				base_error(char *base)
{
	int i;
	int j;

	i = 0;
	if (*base == '\0' || *(base + 1) == '\0')
		return (0);
	while (*(base + i))
	{
		j = i + 1;
		if (*(base + i) == '+' || *(base + i) == '-')
			return (0);
		while (*(base + j))
		{
			if (*(base + i) == *(base + j))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

unsigned int	ft_check_nbr(int nbr, unsigned int nombre, char *base)
{
	if (nbr == 0)
	{
		ft_putchar(*base);
		return (0);
	}
	if (nbr < 0)
	{
		nombre = -nbr;
		ft_putchar('-');
	}
	else
		nombre = nbr;
	return (nombre);
}

void			ft_putnbr_base(int nbr, char *base)
{
	unsigned int	nombre;
	int				size;
	int				nb_final[100];
	int				i;

	i = 0;
	size = 0;
	nombre = 0;
	if (base_error(base))
	{
		nombre = ft_check_nbr(nbr, nombre, base);
		while (*(base + size))
			size++;
		while (nombre != 0)
		{
			*(nb_final + i) = nombre % size;
			nombre = nombre / size;
			++i;
		}
		while (--i >= 0)
			ft_putchar(*(base + *(nb_final + i)));
	}
}
