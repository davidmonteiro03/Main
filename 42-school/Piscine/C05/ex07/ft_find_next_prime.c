/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 14:17:34 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/30 16:53:18 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
//#include <stdlib.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	t;

	if (nb == 0 || nb == 1)
		return (0);
	i = 1;
	t = 0;
	while (i <= nb)
	{
		if (nb % i == 0)
			t++;
		i++;
	}
	if (t == 2)
		return (1);
	return (0);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

/*
int	main(int ac, char **av)
{
	if (ac != 2)
		write (1, "\n", 1);
	else
		printf("%d",ft_find_next_prime(atoi(av[1])));
	return (0);
}
*/
