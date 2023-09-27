/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:58:07 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/06 19:24:30 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

/*#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	if (ac != 2)
		write (1, "\n", 1);
	else
		printf("%d", ft_recursive_factorial(atoi(av[1])));
	return (0);
}*/
