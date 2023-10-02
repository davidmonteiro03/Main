/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:07:59 by dcaetano          #+#    #+#             */
/*   Updated: 2023/10/02 14:58:28 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_exec_isalpha(int c)
{
	printf("ft_isalpha(%d) = %d\n", c, ft_isalpha(c));
	printf("  isalpha(%d)  = %d\n", c, isalpha(c));
}

void	ft_exec_isdigit(int c)
{
	printf("ft_isdigit(%d) = %d\n", c, ft_isdigit(c));
	printf("  isdigit(%d)  = %d\n", c, isdigit(c));
}

void	ft_exec_isalnum(int c)
{
	printf("ft_isalnum(%d) = %d\n", c, ft_isalnum(c));
	printf("  isalnum(%d)  = %d\n", c, isalnum(c));
}

void	ft_exec_1(char **av)
{
	ft_exec_isalpha(atoi(*av));
	ft_exec_isdigit(atoi(*av));
	ft_exec_isalnum(atoi(*av));
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_exec_1(av + 1);
	else
		printf("\n");
	return (0);
}
