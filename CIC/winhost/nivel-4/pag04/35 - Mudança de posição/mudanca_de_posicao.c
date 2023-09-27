/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mudanca_de_posicao.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:29:16 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/11 17:33:09 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	i, j;
	int	n;
	int	mat[100][100];

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
	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			printf("%d", mat[j][i]);
			if (j < n - 1)
				printf(" ");
			j++;
		}
		printf("\n");
		i++;
	}
	return (0);
}
