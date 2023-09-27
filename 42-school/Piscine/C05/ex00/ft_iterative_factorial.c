/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:47:48 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/02 14:23:52 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	fat;

	if (nb < 0)
		return (0);
	fat = 1;
	while (nb > 0)
	{
		fat *= nb;
		nb--;
	}
	return (fat);
}
/*#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{//	colocar ./a.out [num] // sendo [num] o numero desejado
	if (ac != 2)
		write (1, "\n", 1);
	else
		printf("%d\n",ft_iterative_factorial(atoi(av[1])));
	return (0);
}*/
