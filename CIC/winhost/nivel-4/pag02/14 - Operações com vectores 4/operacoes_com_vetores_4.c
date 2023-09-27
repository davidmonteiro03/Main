/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operacoes_com_vetores_4.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 09:57:14 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/11 10:09:50 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>

int	main(void)
{
	int	n;
	int	i;
	int	list[100];
	int	soma;
	double	media;
	int	max;
	int	count;

	scanf("%d", &n);
	if (n >= 2)
	{
		i = 0;
		soma = 0;
		while (i < n)
		{
			scanf("%d", &list[i]);
			if (i == 0)
				max = list[i];
			if (list[i] > max)
				max = list[i];
			soma += list[i];
			i++;
		}
		media = (double)soma / (double)n;
		printf("%d\n%.2lf\n", soma, media);
		i = 0;
		while (i < n)
		{
			if (fabs(media - (double)list[i]) <= 1.0)
				printf("%d\n", i + 1);
			i++;
		}
		i = 0;
		count = 0;
		while (i < n)
		{
			if (list[i] == max)
				count++;
			i++;
		}
		printf("%d", count);
	}
	return (0);
}
