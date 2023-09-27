/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:09:11 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/01 08:15:25 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	aux;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	aux = nb;
	while (power > 1)
	{
		nb *= aux;
		power--;
	}
	return (nb);
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac != 3)
		write (1, "\n", 1);
	else
		printf("%d",ft_iterative_power(atoi(av[1]), atoi(av[2])));
	return (0);
}*/
