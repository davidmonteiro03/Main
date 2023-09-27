/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matriz_triangular_superior.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 19:26:05 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/23 19:30:16 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	m;
	int	t;
	int	u;
	int	mat[100][100];
	int	i;
	int	k;

	scanf("%d %d", &n, &m);
	if (n == m)
	{
		i = -1;
		while (++i < n)
		{
			k = -1;
			while (++k < m)
				scanf("%d", &mat[i][k]);
		}
		t = 0;
		u = 0;
		i = -1;
		while (++i < n)
		{
			k = -1;
			while (++k < m)
			{
				if (i > k)
				{
					u++;
					if (mat[i][k] == 0)
						t++;
				}
			}
		}
		if (t - u == 0)
			printf("A MATRIZ E TRIANGULAR SUPERIOR");
		else
			printf("A MATRIZ NAO E TRIANGULAR SUPERIOR");
	}
	else
		printf("A MATRIZ NAO E QUADRADA");
	printf("\n");
	return (0);
}
