/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operacoes_com_vetores_1.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 09:03:56 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/11 09:13:59 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	i;
	int	list[100];
	int	min, pos_min;
	int	soma, fat;
	int	imp_count;

	scanf("%d", &n);
	if (n >= 2)
	{
		i = 0;
		pos_min = 1;
		while (i < n)
		{
			scanf("%d", &list[i]);
			if (i == 0)
				min = list[i];
			if (list[i] < min)
			{
				min = list[i];
				pos_min = i + 1;
			}
			i++;
		}
		printf("%d (%d)\n", min, pos_min);
		soma = list[0] + list[n - 1];
		i = 1;
		fat = 1;
		while (i <= soma)
		{
			fat *= i;
			i++;
		}
		printf("%d\n", fat);
		i = 0;
		imp_count = 0;
		while (i < n)
		{
			if (list[i] % 2 != 0)
			{
				printf("%d (%d)\n", list[i], i + 1);
				imp_count++;
			}
			i++;
		}
		printf("%d", imp_count);
	}
	return (0);
}
