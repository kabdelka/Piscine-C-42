/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdelka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 03:19:56 by sabdelka          #+#    #+#             */
/*   Updated: 2019/09/14 11:55:03 by sabdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int x;
	int res;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	x = 0;
	res = 1;
	while (x < power)
	{
		res = res * nb;
		x++;
	}
	return (res);
}
