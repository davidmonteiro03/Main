/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 10:51:44 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/28 17:16:53 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int ac, char **av)
{
	if (ac == 5 && strlen(av[3]) == 1)
	{
		printf("=======\nMEMCCPY\n\n");
		printf("bgn: %s\n", av[1]);
		ft_memccpy(av[1], av[2], av[3][0], atoi(av[4]));
		printf("end: %s\n", av[1]);
	}
	printf("\n");
	return (0);
}
