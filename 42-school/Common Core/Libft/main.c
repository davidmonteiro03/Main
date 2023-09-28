/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 10:51:44 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/28 11:16:22 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int ac, char **av)
{
	if (ac == 3 && strlen(av[2]) == 1)
	{
		printf("=======\n");
		printf("STRRCHR\n\n");
		printf("bgn: %s\n", av[1]);
		printf("end: ");
		if (ft_strrchr(av[1], av[2][0]))
			printf("%s", ft_strrchr(av[1], av[2][0]));
		printf("\n");
		printf("\n=====\n");
		printf("BZERO\n\n");
		ft_bzero(av[1], atoi(av[2]));
	}
	else if (ac == 4 && strlen(av[2]) == 1)
	{
		printf("======\n");
		printf("MEMSET\n\n");
		printf("bgn: %s\n", av[1]);
		ft_memset(av[1], av[2][0], atoi(av[3]));
		printf("end: %s\n", av[1]);
	}
	printf("\n");
	return (0);
}
