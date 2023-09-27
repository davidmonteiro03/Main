/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 11:01:58 by dcaetano          #+#    #+#             */
/*   Updated: 2023/08/31 13:09:10 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	alg;
	int	sinal;

	i = 0;
	num = 0;
	alg = 0;
	sinal = 1;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			sinal = -sinal;
		if (str[i] >= '0' && str[i] <= '9')
		{
			num *= 10;
			num += str[i] - '0';
			alg++;
		}
		else if (alg > 0)
			break ;
		i++;
	}
	return (num * sinal);
}

/*#include <stdio.h>

int	main(int ac, char **av)
{
	int	i;

	if (ac == 1)
		write (1, "\n", 1);
	else
	{
		i = 1;
		while (i < ac)
		{
			printf("%d\n", ft_atoi(av[i]));
			i++;
		}
	}
	return (0);
}*/
