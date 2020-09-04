/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   realpham.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdelka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 14:53:51 by sabdelka          #+#    #+#             */
/*   Updated: 2019/08/31 16:46:03 by sabdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char k)
 	{
		write(1, &k, 1);
	}
int main(void)
	{
		int i;
		
		i = 123;
		while (i-- < 97)
			  (i % 2 == 0) ? ft_putchar(i) : ft_putchar(i - 32);
		ft_putchar('\n');;
		return 0;
	}
