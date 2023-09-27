/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CPAS2006-F6.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 20:04:03 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/22 20:06:43 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	i;
	int	k;
	int	n;
	int	mat[100][100];

	scanf("%d", &n);
	i = -1;
	while (++i < n)
	{
		k = -1;
		while (++k < n)
			scanf("%d", &mat[i][k]);
	}
	i = -1;
	while (++i < n)
	{
		k = -1;
		while (++k < n)
		{
			if (k == n - 1)
				printf("%d", mat[k][i]);
			else
				printf("%d ", mat[k][i]);
		}
		printf("\n");
	}
	return (0);
}
