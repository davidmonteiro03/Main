/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CPAS_junior2007-F5.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 20:43:13 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/14 20:43:14 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	double	media;
	int		i, n, peso, soma, pesos, nota;

	scanf("%d", &n);
	i = 0;
	soma = 0;
	pesos = 0;
	while (i < n)
	{
		scanf("%d %d", &peso, &nota);
		soma += peso * nota;
		pesos += peso;
		i++;
	}
	media = (double)soma / (double)pesos;
	printf("%.2lf\n", media);
	return (0);
}
