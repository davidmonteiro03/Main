/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 10:51:44 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/28 14:14:24 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int ac, char **av)
{
	int	i;
	int	len;

	if (ac == 3)
	{
		if (strlen(av[2]) == 1)
		{
			printf("=======\nSTRRCHR\n\n");
			printf("bgn: %s\n", av[1]);
			printf("end: ");
			if (ft_strrchr(av[1], av[2][0]))
				printf("%s", ft_strrchr(av[1], av[2][0]));
			printf("\n\n");
		}
		printf("=====\nBZERO\n\n");
		printf("bgn: %s\n", av[1]);
		len = strlen(av[1]);
		ft_bzero(av[1], (unsigned int)atoi(av[2]));
		printf("end: ");
		i = -1;
		while (++i < len)
			if (av[1][i])
				printf("%c", av[1][i]);
		printf("\n");
	}
	else if (ac == 4 && strlen(av[2]) == 1)
	{
		printf("======\nMEMSET\n\n");
		printf("bgn: %s\n", av[1]);
		ft_memset(av[1], av[2][0], atoi(av[3]));
		printf("end: %s\n", av[1]);
	}
	printf("\n");
	return (0);
}
