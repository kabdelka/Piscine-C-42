/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdelka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 14:15:55 by sabdelka          #+#    #+#             */
/*   Updated: 2019/09/02 16:30:02 by sabdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char s)
{
	write(1, &s, 1);
}

void	ft_print_numbers(char a, char b, char c)
{
	if (a != b && b != c && c != a)
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
	}
	if (!(a == 55 && b == 56 && c == 57))
		write(1, ", ", 2);
	else
		return ;
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 48;
	b = a + 1;
	c = b + 1;
	while (c <= 57)
	{
		ft_print_numbers(a, b, c);
		c++;
		if (c > 57)
		{
			b++;
			c = b + 1;
		}
		if (b > 56)
		{
			a++;
			b = a + 1;
			c = b + 1;
		}
	}
}
