/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 10:51:44 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/28 15:02:50 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		printf("======\nMEMCPY\n\n");
		printf("bgn: %s\n", av[1]);
		ft_memcpy(av[1], av[2], atoi(av[3]));
		printf("end: %s\n", av[1]);
	}
	printf("\n");
	return (0);
}
