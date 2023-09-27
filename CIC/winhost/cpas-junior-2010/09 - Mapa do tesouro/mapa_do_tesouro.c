/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapa_do_tesouro.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:27:54 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/20 17:33:01 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	i;
	int	j;
	int	mat[13][13];
	int	t;

	scanf("%d", &n);
	i = -1;
	while (++i < n)
	{
		j = -1;
		while (++j < n)
			mat[i][j] = 0;
	}
	i = -1;
	while (++i < n)
	{
		t = 1;
		mat[i][0] = 1;
	}
	i = 0;
	while (++i < n)
	{
		j = 0;
		while (++j < n)
			mat[i][j] = mat[i - 1][j] + mat[i - 1][j - 1];
	}
	i = -1;
	while (++i < n)
	{
		j = -1;
		while (++j < n)
		{
			if (mat[i][j] != 0)
			{
				if (i == j)
					printf("1");
				else if (mat[i][j] < 10)
					printf("%d   ", mat[i][j]);
				else if (mat[i][j] < 100)
					printf("%d  ", mat[i][j]);
				else
					printf("%d ", mat[i][j]);
			}
		}
		printf("\n");
	}
	return (0);
}
