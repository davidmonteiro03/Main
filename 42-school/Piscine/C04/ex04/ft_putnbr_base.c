/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 13:10:08 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/09 12:16:44 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_base(int nbr, char *base)
{
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
	int	flag;

	flag = 0;
	if (ft_strlen(base) <= 1)
		flag = 1;
	i = 0;
	while (base[i] != '\0')
	{
		k = i + 1;
		while (base[k] != '\0')
		{
			if (base[i] == base[k])
				flag = 1;
			k++;
		}
		if (base[i] == '+' || base[i] == '-')
			flag = 1;
		i++;
	}
	if (flag == 0)
		ft_base(nbr, base);
}

int	main(int ac, char **av)
{
	if (ac == 1)
		write (1, "\n", 1);
	else if (ac == 3)
		ft_putnbr_base(atoi(av[1]), av[2]);
	return (0);
}
