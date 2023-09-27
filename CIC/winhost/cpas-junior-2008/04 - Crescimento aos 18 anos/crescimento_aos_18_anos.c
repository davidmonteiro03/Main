/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   crescimento_aos_18_anos.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 23:13:24 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/20 11:03:15 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ler(int idd, int alt)
{
	int	i;
	int	total;
	int	soma;
	int	tmp;

	i = -1;
	soma = 0;
	while (++i < 18 - idd)
	{
		scanf("%d", &tmp);
		soma += tmp;
	}
	total = soma + alt;
	return (total);
}

int	main(void)
{
	int	x;
	int	y;
	int	h1;
	int	h2;
	int	tmp;

	scanf("%d", &x);
	scanf("%d", &h1);
	h1 = ler(x, h1);
	scanf("%d", &y);
	scanf("%d", &h2);
	h2 = ler(y, h2);
	if (h1 > h2)
		printf("Carlos\n");
	else if (h1 < h2)
		printf("Pedro\n");
	else
		printf("=");
	return (0);
}
