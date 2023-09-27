/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   temperaturas_medias.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:15:23 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/11 18:42:20 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n, m;
	int	mat[100][100];
	int	i, j;
	int	max, count;
	double	soma, media[100];

	scanf("%d", &n);
	scanf("%d", &m);
	if (n >= 1 && n <= 20 && m >= 1 && m <= 20)
	{
		i = 0;
		while (i < n)
		{
			j = 0;
			while (j < m)
			{
				scanf("%d", &mat[i][j]);
				if (j == 0)
					max = mat[i][j];
				if (mat[i][j] > max)
					max = mat[i][j];
				j++;
			}
			i++;
		}
		i = 0;
		while (i < n)
		{
			j = 0;
			soma = 0;
			while (j < m)
			{
				soma += mat[i][j];
				j++;
			}
			media[i] = (double)soma / (double)m;
			printf("%.2lf\n", media[i]);
			i++;
		}
		i = 0;
		count = 0;
		while (i < n)
		{
			j = 0;
			while (j < m)
			{
				if (mat[i][j] == max)
					printf("%d %d\n", i + 1, j + 1);
				if (i > 0 && i < n - 1 && j > 0 && j < m - 1)
				{
					if (mat[i - 1][j - 1] < mat[i][j] && mat[i - 1][j] < mat[i][j] && mat[i - 1][j + 1] < mat[i][j])
					{
						if (mat[i][j - 1] < mat[i][j] && mat[i][j + 1] < mat[i][j])
						{
							if (mat[i + 1][j - 1] < mat[i][j] && mat[i + 1][j] < mat[i][j] && mat[i + 1][j + 1] < mat[i][j])
							{
								if (mat[i][j - 1] < mat[i][j] && mat[i][j + 1] < mat[i][j])
									count++;
							}
						}
					}
				}
				j++;
			}
			i++;
		}
		printf("%d", count);
	}
	return (0);
}
