/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operacoes_com_vetores_2.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 09:16:15 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/11 09:47:06 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	i;
	int	list[100];
	int	max, pos_max;
	int	min, pos_min;
	int	count;

	scanf("%d", &n);
	if (n >= 3 && n % 2 != 0)
	{
		i = 0;
		while (i < n)
		{
			scanf("%d", &list[i]);
			if (i == 0)
			{
				max = min = list[i];
				pos_max = pos_min = i + 1;
			}
			if (list[i] > max)
			{
				max = list[i];
				pos_max = i + 1;
			}
			if (list[i] < min)
			{
				min = list[i];
				pos_min = i + 1;
			}
			i++;
		}
		printf("%d (%d)\n", max, pos_max);
		printf("%d (%d)\n", min, pos_min);
		if (list[n / 2] % 2 == 0)
			printf("PAR\n");
		else
			printf("IMPAR\n");
		i = 0;
		count = 0;
		while (i < n)
		{
			if (list[i] >= list[n / 2])
			{
				printf("%d (%d)\n", list[i], i + 1);
				count++;
			}
			i++;
		}
		printf("%d", count);
	}
	return (0);
}
