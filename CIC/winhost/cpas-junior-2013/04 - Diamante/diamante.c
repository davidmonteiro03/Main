/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   diamante.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:31:31 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/21 11:36:55 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	i;
	int	t;
	int	k;

	scanf("%d", &n);
	i = 0;
	while (++i <= 2 * n)
	{
		if (i % 2 == 1)
		{
			t = n;
			while (--t >= i / 2 + 1)
				printf(" ");
			k = 0;
			while (++k <= i)
				printf("*");
		}
		else if (i <= 2 * n - 1)
			printf("\n");
	}
	i = 2 * n - 1;
	while (--i >= 1)
	{
		if (i % 2 == 1)
		{
			t = i / 2;
			while (++t <= n - 1)
				printf(" ");
			k = 0;
			while (++k <= i)
				printf("*");
		}
		else if (i >= 1)
			printf("\n");
	}
	printf("\n");
	return (0);
}
