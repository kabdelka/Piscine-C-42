/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdelka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 05:41:54 by sabdelka          #+#    #+#             */
/*   Updated: 2019/09/14 16:55:35 by sabdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int hbib;

	hbib = 1;
	while (nb < 0)
		return (0);
	while (hbib < nb / hbib)
		hbib++;
	if (hbib * hbib == nb)
		return (hbib);
	else
		return (0);
}
