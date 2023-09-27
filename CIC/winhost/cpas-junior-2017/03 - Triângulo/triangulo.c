/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   triangulo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 10:58:05 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/22 11:00:25 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	m;
	int	t;
	int	i;
	int	k;

	scanf("%d %d", &n, &m);
	t = 0;
	i = 0;
	while (++i <= m)
	{
		k = -1;
		while (++k < i)
		{
			n++;
			if (k < i - 1)
				printf("%d ", n - 1);
			else
				printf("%d", n - 1);
			t = 0;
		}
		printf("\n");
	}
	return (0);
}
