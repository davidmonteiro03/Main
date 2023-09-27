/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quadrado_latino.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:29:43 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/11 17:18:01 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	mat[100][100];
	int	n, flag;
	int	i, j, k;

	scanf("%d", &n);
	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			scanf("%d", &mat[i][j]);
			j++;
		}
		i++;
	}
	flag = 0;
	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			k = 0;
			while (k < n)
			{
				if (j != k && (mat[i][j] == mat[i][k] || mat[j][i] == mat[k][i]))
					flag = 1;
				k++;
			}
			j++;
		}
		i++;
	}
	if (flag == 0)
		printf("VERDADEIRO");
	else
		printf("FALSO");
	return (0);
}
