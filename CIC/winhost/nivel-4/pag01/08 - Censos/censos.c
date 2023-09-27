/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   censos.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 20:31:55 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 20:43:15 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	idades_pais[100];
	int	idades_maes[100];
	int	filhos[100];
	int	rendimento[100];
	int	i, t;
	int	max, soma;
	double	media;
	double	perc;

	scanf("%d", &n);
	if (n > 0)
	{
		i = 0;
		t = 0;
		soma = 0;
		while (i < n)
		{
			scanf("%d %d", &idades_pais[i], &idades_maes[i]);
			scanf("%d", &filhos[i]);
			scanf("%d", &rendimento[i]);
			soma += idades_pais[i] + idades_maes[i];
			if (i == 0)
				max = filhos[i];
			if (filhos[i] > max)
				max = filhos[i];
			if (rendimento[i] < 20000)
				t++;
			i++;
		}
		media = (double)soma / (double)(n * 2);
		perc = (double)t / (double)n * 100.0;
		printf("IDADE MEDIA PROGENITORES: %.2lf\n", media);
		printf("NUMERO MAXIMO DE FILHOS POR FAMILIA: %d\n", max);
		printf("PERCENTAGEM DE FAMILIAS COM RENDIMENTO INFERIOR A 20000: %.2lf%%", perc);
	}
	return (0);
}
