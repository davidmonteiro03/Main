/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 18:38:43 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/29 14:16:45 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	k;

	i = 1;
	k = 0;
	while (nb > 0)
	{
		nb -= i;
		k++;
		i += 2;
	}
	if (nb < 0)
		return (0);
	return (k);
}
/*
int	main(int ac, char **av)
{
	if (ac != 2)
		write (1, "\n", 1);
	else
		printf("%d", ft_sqrt(atoi(av[1])));
	return (0);
}
*/
