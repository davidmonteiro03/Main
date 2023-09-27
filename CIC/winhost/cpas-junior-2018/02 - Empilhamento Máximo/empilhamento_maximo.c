/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   empilhamento_maximo.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 15:09:38 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/22 15:25:14 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	atr_mat(int mat[3][3], int n)
{
	mat[0][0] = 0;
	mat[0][1] = 0;
	mat[0][2] = 0;
	mat[1][0] = n;
	mat[1][1] = n;
	mat[1][2] = 0;
	mat[2][0] = n * 2;
	mat[2][1] = n;
	mat[2][2] = n;
}

int	main(void)
{
	int	i;
	int	j;
	int	n;
	int	mat[3][3];

	scanf("%d", &n);
	atr_mat(mat, n);
	i = -1;
	while (++i < 3)
	{
		j = -1;
		while (++j < 3)
		{
			printf("%c%d-", i + 65, j + 1);
			if (mat[i][j] > 300)
				printf("Nao");
			else
				printf("Sim");
			printf("\n");
		}
	}
	return (0);
}
