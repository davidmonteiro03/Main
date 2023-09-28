/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:43:28 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/28 09:32:15 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

int	main(int ac, char **av)
{
	if (ac == 3 && strlen(av[2]) == 1)
	{
		printf("=======\n");
		printf("STRRCHR\n\n");
		printf("bgn: %s\n", av[1]);
		printf("end: %s\n", ft_strrchr(av[1], av[2][0]));
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
