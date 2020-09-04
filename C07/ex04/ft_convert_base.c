/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdelka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 11:23:04 by sabdelka          #+#    #+#             */
/*   Updated: 2019/09/19 11:24:21 by sabdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_length(char *str);
int			ft_conv_base_atoi(char *str, char *base, int i);
int			checkbase(char *base);

long		ft_atoi_base(char *str, char *base, int len)
{
	int		i;
	int		x;
	long	res;

	i = 0;
	x = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			x = -1 * x;
		i++;
	}
	while (ft_conv_base_atoi(str, base, i) != -1)
	{
		res = res * len + ft_conv_base_atoi(str, base, i);
		i++;
	}
	return (res * x);
}

int			dest_final(long nbr, int len)
{
	int		i;
	long	x;

	i = 0;
	x = nbr;
	if (x < 0)
		x = -x;
	while (x >= len)
	{
		i++;
		x = x / len;
	}
	i++;
	if (nbr < 0)
		i++;
	return (i);
}

void		ft_putnbr_base(long nbr, char *base, char *dest, int ilen)
{
	long	w;
	int		len;
	int		neg;

	neg = nbr < 0 ? 1 : 0;
	len = ft_length(base);
	if (nbr < 0)
	{
		nbr = nbr * -1;
		dest[0] = '-';
	}
	while (ilen > neg)
	{
		w = (nbr % len);
		dest[ilen - 1] = base[w];
		nbr = nbr / len;
		ilen--;
	}
}

char		*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		len_bfrom;
	int		len_bto;
	long	transition;
	char	*dest;
	int		mallen;

	len_bfrom = ft_length(base_from);
	len_bto = ft_length(base_to);
	if (checkbase(base_from) == 0 || checkbase(base_to) == 0)
		return (NULL);
	transition = ft_atoi_base(nbr, base_from, len_bfrom);
	mallen = dest_final(transition, len_bto);
	if (!(dest = malloc(sizeof(char) * (mallen + 1))))
		return (NULL);
	ft_putnbr_base(transition, base_to, dest, mallen);
	dest[mallen] = '\0';
	return (dest);
}
