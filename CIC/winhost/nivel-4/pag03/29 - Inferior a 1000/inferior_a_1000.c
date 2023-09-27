/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inferior_a_1000.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:18:32 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/11 15:29:57 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	soma, i, k;

	soma = 0;
	k = 1;
	while (soma < 1000)
	{
		i = 1;
		soma = i;
		while (i <= k)
		{
			soma += i;
			i++;
		}
		printf("A SOMA DE 1 A %d E INFERIOR A 1000\n", k);
		k++;
	}
	return (0);
}
