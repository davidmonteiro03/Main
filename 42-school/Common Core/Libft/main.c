/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:43:28 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/26 21:32:20 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

int	main(int ac, char **av)
{
	char	*c;

	if (ac == 3 && strlen(av[2]) == 1)
	{
		printf("=======\n");
		printf("STRRCHR\n\n");
		printf("bgn: %s\n", av[1]);
		c = ft_strrchr(av[1], av[2][0]);
		printf("end: %s\n", c);
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
