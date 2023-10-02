/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:07:59 by dcaetano          #+#    #+#             */
/*   Updated: 2023/10/02 13:41:02 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_exec_isalpha(char c)
{
	printf("ft_isalpha('%c') = %d\n", c, ft_isalpha(c));
}

void	ft_exec_isdigit(char c)
{
	printf("ft_isdigit('%c') = %d\n", c, ft_isdigit(c));
}

void	ft_exec_1(char **av)
{
	if (strlen(*av) == 1)
	{
		ft_exec_isalpha(**av);
		ft_exec_isdigit(**av);
	}
	else
		printf("\n");
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_exec_1(av + 1);
	else
		printf("\n");
	return (0);
}
