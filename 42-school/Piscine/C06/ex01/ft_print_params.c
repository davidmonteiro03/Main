/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 09:40:48 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/30 16:57:09 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write (1, str++, 1);
	write (1, "\n", 1);
}

int	main(int ac, char **av)
{
	int	i;

	if (ac > 1)
	{
		i = 0;
		while (++i < ac)
			ft_putstr(av[i]);
	}
	else
		write (1, "\n", 1);
	return (0);
}
