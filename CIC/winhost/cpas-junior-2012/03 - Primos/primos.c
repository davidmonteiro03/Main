/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   primos.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:05:46 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/20 18:10:21 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	i;
	int	j;
	int	s;
	int	a[100];
	int	b[100];

	scanf("%d", &n);
	i = 0;
	while (++i <= n)
		scanf("%d %d", &a[i], &b[i]);
	i = 0;
	while (++i <= n)
	{
		while (a[i] <= b[i])
		{
			s = 0;
			j = 0;
			while (++j <= a[i])
				if (a[i] % j == 0)
					s++;
			if (s == 2)
				printf("%d\n", a[i]);
			a[i]++;
		}
		printf("\n");
	}
	return (0);
}
