/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:13:29 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/09 12:15:31 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

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

int	ft_convert(char *str, char *base)
{
	int	i;
	int	k;
	int	num;
	int	t;

	i = 0;
	t = 0;
	num = 0;
	while (str[i] != '\0')
	{
		k = 0;
		while (base[k] != '\0')
		{
			if (str[i] == base[k])
				num += k * ft_pow(strlen(base), strlen(str) - i - 1);
			k++;
		}
		i++;
	}
	return (num);
}

int	ft_whtspc(char c)
{
	if (c == '+' || c == '-' || (c > 8 && c < 14) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	flag;
	int	i;
	int	k;

	flag = 0;
	i = 0;
	if (ft_strlen(base) <= 1)
		flag = 1;
	while (base[i] != '\0')
	{
		k = i + 1;
		while (base[k] != '\0')
		{
			if (base[i] == base[k])
				flag = 1;
			k++;
		}
		if (ft_whtspc(base[i]) == 1)
			flag = 1;
		i++;
	}
	if (flag == 0)
		return (ft_convert(str, base));
	else
		return (0);
}

int	main(int ac, char **av)
{
	if (ac != 3)
		write (1, "\n", 1);
	else
		printf("%d\n", ft_atoi_base(av[1], av[2]));
	return (0);
}
