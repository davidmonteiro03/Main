/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maior_menor_e_posicoes.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:17:33 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 15:37:41 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n, i, k;
	int	list, aux[100];
	int	max, min;
	int	pos_max, pos_min, pos[100];

	scanf("%d", &n);
	i = k = 0;
	while (i < n)
	{
		scanf("%d", &list);
		if (list % 2 != 0)
		{
			aux[k] = list;
			pos[k] = i + 1;
			k++;
		}
		i++;
	}
	i = 0;
	max = min = aux[0];
	pos_min = pos_max = pos[0];
	while (i < k)
	{
		if (aux[i] > max)
		{
			max = aux[i];
			pos_max = pos[i];
		}
		if (aux[i] < min)
		{
			min = aux[i];
			pos_min = pos[i];
		}
		i++;
	}
	if (n > 0)
		printf("%d\n%d\n%d\n%d", min, pos_min, max, pos_max);
	return (0);
}
