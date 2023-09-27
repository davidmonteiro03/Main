/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 18:19:11 by dcaetano          #+#    #+#             */
/*   Updated: 2023/08/31 18:34:16 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 1)
		return (1);
	if (index == 0)
		return (0);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
/*#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac != 2)
		write (1, "\n", 1);
	else
		printf("%d", ft_fibonacci(atoi(av[1])));
	return (0);	
}*/
