/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maior_e_menor_de_N_numeros.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 18:48:37 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 18:51:02 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	tmp;
	int	n;
	int	min, max;
	int	i;

	scanf("%d", &n);
	i = 0;
	while (i < n)
	{
		scanf("%d", &tmp);
		if (i == 0)
			max = min = tmp;
		if (tmp > max)
			max = tmp;
		if (tmp < min)
			min = tmp;
		i++;
	}
	printf("%d\n%d", min, max);
	return (0);
}
