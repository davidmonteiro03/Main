/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   soma_quadrados.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:03:50 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/21 11:07:41 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	a[100];
	int	u;
	int	t;
	int	i;
	int	k;

	scanf("%d", &n);
	u = -1;
	while (++u < n)
		scanf("%d", &a[u]);
	u = -1;
	while (++u < n)
	{
		t = 0;
		i = -1;
		while (++i <= a[u])
		{
			k = -1;
			while (++k <= a[u])
				if (i * i + k * k == a[u])
					t++;
		}
		if (t > 0)
			printf("S\n");
		else
			printf("N\n");
	}
	return (0);
}
