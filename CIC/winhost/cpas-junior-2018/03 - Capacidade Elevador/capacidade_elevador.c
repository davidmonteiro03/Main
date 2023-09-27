/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   capacidade_elevador.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 15:27:43 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/22 15:29:50 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	c[100];
	int	d[100];
	int	soma;
	int	i;

	scanf("%d", &a);
	scanf("%d", &b);
	soma = 0;
	i = 0;
	while (++i <= b)
		scanf("%d %d", &c[i], &d[i]);
	i = 0;
	while (++i < b)
	{
		soma += d[i];
		soma -= c[i];
		if (soma > a)
			printf("Sim\n");
		else
			printf("Nao\n");
	}
	return (0);
}
