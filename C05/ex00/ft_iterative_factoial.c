/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factoial.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdelka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 13:51:16 by sabdelka          #+#    #+#             */
/*   Updated: 2019/09/11 14:08:50 by sabdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factioral(int nb)
{
	int fact;
	int i;
	int res;
	if (nb => -2147483648 && nb <= 2147483648 )
	{
		fact = nb;
		i = 1;
		while ( fact != i)
		{
			res = nb * ( fact - i);
			i++;
		}
		return (res);
	}
}

		

