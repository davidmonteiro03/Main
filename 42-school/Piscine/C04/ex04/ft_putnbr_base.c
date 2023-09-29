/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 13:10:08 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/29 11:22:42 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_base(int nbr, char *base)
{
	if (nbr == -2147483648)
	{
		write (1, "-10000000000000000000000000000000", 33);
		return ;
	}
	if (nbr < 0)
	{
		write (1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= ft_strlen(base))
	{
		ft_base(nbr / ft_strlen(base), base);
		ft_base(nbr % ft_strlen(base), base);
	}
	else
		ft_putchar(base[nbr % ft_strlen(base)]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	k;

	if (ft_strlen(base) <= 1)
		return ;
	i = -1;
	while (base[++i])
	{
		k = i;
		while (base[++k])
			if (base[i] == base[k])
				return ;
		if (base[i] == '+' || base[i] == '-')
			return ;
	}
	ft_base(nbr, base);
}
