/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdelka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 07:07:49 by sabdelka          #+#    #+#             */
/*   Updated: 2019/09/14 16:53:10 by sabdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int x;

	x = nb - 1;
	if (nb <= 1)
		return (0);
	while (x != 1)
	{
		if (nb % x == 0)
			return (0);
		else
			x--;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{	
	if (nb <= 0)
		return (2);
	if (nb > 46340 * 46340)
		return (0);
	while (0 < nb && nb < 2147483647)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		else
			nb++;
	}
	return (0);
}

int main (int ac, char **av)
{
	printf("%d\n", ft_find_next_prime(atoi(av[1])));
	return 0;
}

