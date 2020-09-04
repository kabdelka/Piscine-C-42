/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdelka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 22:20:48 by sabdelka          #+#    #+#             */
/*   Updated: 2019/09/01 17:23:58 by sabdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char ralphabet;

	ralphabet = 122;
	while (ralphabet >= 97)
	{
		write(1, &ralphabet, 1);
		ralphabet--;
	}
}
