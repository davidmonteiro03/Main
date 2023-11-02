/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matriz_concava.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:51:42 by dcaetano          #+#    #+#             */
/*   Updated: 2023/11/02 11:25:12 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	d(int v, int k, int b, int p)
{
	if (p == 0)
	{
		if (k == b)
			printf("%d", v);
		else
			printf("%-2d", v);
	}
	else if (p == 1)
	{
		if (k == b)
			printf("%d", v);
		else
			printf("%-3d", v);
	}
	else if (p == 2)
	{
		if (k == b)
			printf("%d", v);
		else
			printf("%-4d", v);
	}
}

void	s(int n, int p)
{
	int	i;
	int	k;

	i = 0;
	while (++i < 2 * n)
	{
		k = 0;
		while (++k < 2 * n)
		{
			if (i == 1 || k >= i && i <= 2 * n - k)
				d(n - i + 1, k, 2 * n - 1, p);
			else if (k == 1 || k <= 2 * n - i)
				d(n - k + 1, k, 2 * n - 1, p);
			else if (k <= 2 * n - 1 && i <= k)
				d(1 + k - n, k, 2 * n - 1, p);
			else
				d(1 + i - n, k, 2 * n - 1, p);
		}
		printf("\n");
	}
}

int	g(int n)
{
	int	a;
	int	i;

	i = 0;
	a = n;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	n = a;
	return (i);
}

int	main(void)
{
	int	n;
	int	l;

	scanf("%d", &n);
	if (n <= 0)
		return (0);
	l = g(n);
	s(n, l - 1);
	return (0);
}
