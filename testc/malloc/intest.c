/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intest.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdelka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 17:11:44 by sabdelka          #+#    #+#             */
/*   Updated: 2019/09/10 18:59:41 by sabdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

	void	ft_putchar(char *c)
	{
		write (1, &c, 100);
	}
int main(int argc, char **argv)
{
	int i;
	char **str;

	str[] = argv[];
	
	i = 1;
	while (str[i] != '\0')
	{
		printf("resultat : %s", argv[i]);
		printf("\n");
		i++;
	}
	return (0);
}
