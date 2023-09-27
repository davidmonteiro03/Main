/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   invertido.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:19:32 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/20 18:24:16 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	i;
	int	a;
	int	b;
	int	d;
	int	d2;
	int	in;
	int	in2;
	int	soma;

	scanf("%d", &n);
	i = -1;
	while (++i < n)
	{
		in = 0;
		in2 = 0;
		soma = 0;
		scanf("%d %d", &a, &b);
		while (a > 0)
		{
			d = a % 10;
			a = a / 10;
			in = in * 10 + d;
		}
		while (b > 0)
		{
			d2 = b % 10;
			b = b / 10;
			in2 = in2 * 10 + d2;
		}
		soma = in + in2;
		printf("%d\n", soma);
	}
	return (0);
}
