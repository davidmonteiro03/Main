/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operacoes_com_vetores_7.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 10:33:57 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/11 10:51:02 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	n;
	int	i;
	int	list[100];
	int	max, min;
	int	oco[4], max_oco;
	char	text[4][100];

	scanf("%d", &n);
	if (n >= 2)
	{
		i = 0;
		oco[0] = oco[1] = oco[2] = oco[3] = 0;
		strcpy(text[0], "[1,5]");
		strcpy(text[1], "[6,10]");
		strcpy(text[2], "[11,15]");
		strcpy(text[3], "[16,20]");
		while (i < n)
		{
			scanf("%d", &list[i]);
			if (i == 0)
				max = min = list[i];
			if (list[i] > max)
				max = list[i];
			if (list[i] < min)
				min = list[i];
			if (list[i] >= 1 && list[i] <= 5)
				oco[0]++;
			else if (list[i] >= 6 && list[i] <= 10)
				oco[1]++;
			else if (list[i] >= 11 && list[i] <= 15)
				oco[2]++;
			else if (list[i] >= 16 && list[i] <= 20)
				oco[3]++;
			i++;
		}
		printf("%d\n", max - min);
		i = 0;
		max_oco = oco[0];
		while (i < 4)
		{
			if (oco[i] > max_oco)
				max_oco = oco[i];
			printf("%s=%d\n", text[i], oco[i]);
			i++;
		}
		i = 0;
		while (i < 4)
		{
			if (max_oco == oco[i])
				printf("%s\n", text[i]);
			i++;
		}
	}
	return (0);
}
