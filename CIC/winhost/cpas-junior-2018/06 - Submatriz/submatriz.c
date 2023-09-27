/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   submatriz.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 15:54:29 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/22 15:58:47 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	m;
	int	a;
	int	b;
	int	c;
	int	d;
	int	ma[20][20];
	int	t=0;
	int	i;
	int	k;

	scanf("%d %d", &n, &m);
	t = 0;
	i = 0;
	while (++i <= n)
	{
		k = 0;
		while (++k <= m)
			scanf("%d", &ma[i][k]);
	}
	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);
	i = 0;
	while (++i <= n)
	{
		k = 0;
		while (++k <= m)
		{
			if (i >= a && k >= b && i <= c + a - 1 && k <= d + b - 1)
			{
				if (k == d + b - 1)
					printf("%d", ma[i][k]);
				else
					printf("%d ", ma[i][k]);
				t++;
			}
		}
		if (t > 0 && t <= d)
			printf("\n");
	}
	return (0);
}
