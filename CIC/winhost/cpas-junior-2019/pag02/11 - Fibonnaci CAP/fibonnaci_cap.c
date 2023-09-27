/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fibonnaci_cap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:50:32 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/22 17:12:23 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define MOD 1000000007

int	fibonacci(int n)
{
	int	a;
	int	b;
	int	c;
	int	i;

	a = 0;
	b = 1;
	if (n == 0)
		return (a);
	i = 1;
	while (++i <= n)
	{
		c = a + b;
		a = b;
		b = c % MOD;
	}
	return (b);
}

int	main(void)
{
	int	t;
	int	n;
	int	i;
	int	result[100];

	scanf("%d", &t);
	i = -1;
	while (++i < t)
	{
		scanf("%d", &n);
		result[i] = fibonacci(n);
	}
	i = -1;
	while (++i < t)
		printf("%d\n", result[i]);
	return (0);
}
