/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pares_de_1_a_N.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 18:29:28 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 18:36:03 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	i;

	scanf("%d", &n);
	i = 1;
	while (i <= n)
	{
		if (i % 2 == 0)
			printf("%d\n", i);
		i++;
	}
	return (0);
}