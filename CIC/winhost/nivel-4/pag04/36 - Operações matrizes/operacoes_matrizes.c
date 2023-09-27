/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operacoes_matrizes.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:34:39 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/11 17:44:35 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n, count;
	int	i, j;
	int	mat[100][100];
	int	max[100];
	int	soma;
	int	som;
	double	media[100];
	double	med;

	scanf("%d", &n);
	if (n >= 3 && n <= 6)
	{
		i = 0;
		som = 0;
		while (i < n)
		{
			j = 0;
			soma = 0;
			while (j < n)
			{
				scanf("%d", &mat[i][j]);
				if (j == 0)
					max[i] = mat[i][j];
				if (mat[i][j] > max[i])
					max[i] = mat[i][j];
				som += mat[i][j];
				j++;
			}
			i++;
		}
		med = (double)som / (double)(n * n);
		i = 0;
		while (i < n)
		{
			printf("%d\n", max[i]);
			i++;
		}
		count = 0;
		i = 0;
		while (i < n)
		{
			j = 0;
			soma = 0;
			while (j < n)
			{
				if ((double)mat[i][j] > med)
					count++;
				soma += mat[j][i];
				j++;
			}
			media[i] = (double)soma / (double)n;
			printf("%.2lf\n", media[i]);
			i++;
		}
		printf("%d", count);
	}
	return (0);
}
