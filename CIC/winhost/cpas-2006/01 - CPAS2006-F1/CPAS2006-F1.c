/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CPAS2006-F1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 19:25:40 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/22 19:27:09 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	a;
	int	d;
	int	cubo;
	int	soma;
	int	b;

	scanf("%d", &a);
	b = a;
	soma = 0;
	while (a > 0)
	{
		d = a % 10;
		a = a / 10;
		cubo = d * d * d;
		soma += cubo;
	}
	if (soma == b)
		printf("SIM\n");
	else
		printf("NAO\n");
	return (0);
}
