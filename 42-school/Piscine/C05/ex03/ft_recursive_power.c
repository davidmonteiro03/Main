/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:17:36 by dcaetano          #+#    #+#             */
/*   Updated: 2023/08/31 19:11:40 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac != 3)
		write (1, "\n", 1);
	else
		printf("%d", ft_recursive_power(atoi(av[1]), atoi(av[2])));
	return (0);
}*/
