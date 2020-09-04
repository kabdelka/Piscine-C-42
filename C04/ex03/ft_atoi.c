/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdelka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 11:50:50 by sabdelka          #+#    #+#             */
/*   Updated: 2019/09/16 14:08:29 by sabdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int minus;
	int result;

	i = 0;
	minus = 1;
	result = 0;
	while ((str[i] == '\n') || (str[i] == '\t') || (str[i] == '\r') ||
			(str[i] == '\v') ||
			(str[i] == '\f') ||
			(str[i] == ' '))
		i++;
	while ((str[i] == '-') ||
			(str[i] == '+'))
	{
		if (str[i] == '-')
			minus = minus * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * minus);
}
