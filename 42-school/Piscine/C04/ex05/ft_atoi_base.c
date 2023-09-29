/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:13:29 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/29 11:12:09 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_pow(int a, int b)
{
	int	i;
	int	pot;

	pot = 1;
	i = 0;
	while (i < b)
	{
		pot *= a;
		i++;
	}
	return (pot);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_convert(char *str, char *base)
{
	int	i;
	int	k;
	int	num;
	int	sign;

	i = -1;
	num = 0;
	sign = 1;
	while (str[++i])
	{
		k = -1;
		while (base[++k])
			if (str[i] == base[k])
				num += k * ft_pow(ft_strlen(base), ft_strlen(str) - i - 1);
		if (str[i] == '-')
			sign = -1;
	}
	return (num * sign);
}

int	ft_whtspc(char c)
{
	if (c == '+' || (c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	k;

	if (ft_strlen(base) <= 1)
		return (0);
	i = -1;
	while (base[++i] != '\0')
	{
		k = i;
		while (base[++k] != '\0')
			if (base[i] == base[k])
				return (0);
		if (ft_whtspc(base[i]) == 1)
			return (0);
	}
	return (ft_convert(str, base));
}
/*
int	main(int ac, char **av)
{
	if (ac != 3)
		write (1, "\n", 1);
	else
		printf("%d\n", ft_atoi_base(av[1], av[2]));
	return (0);
}
*/
