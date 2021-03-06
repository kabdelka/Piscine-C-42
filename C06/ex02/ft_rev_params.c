/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdelka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 19:38:18 by sabdelka          #+#    #+#             */
/*   Updated: 2019/09/11 11:54:46 by sabdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstring(char *str)
{
	int k;

	k = 0;
	while (str[k] != '\0')
	{
		ft_putchar(str[k]);
		k++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = argc - 1;
	while (i <= argc && i != 0)
	{
		ft_putstring(argv[i]);
		ft_putchar('\n');
		i--;
	}
}
