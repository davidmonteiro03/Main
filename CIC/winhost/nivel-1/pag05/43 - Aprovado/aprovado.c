/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aprovado.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:39:03 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 15:46:46 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n, m;
	int	i, k;
	double	notas[100][100];
	char	nomes[100][100];
	double	media[100];
	double	soma[100];

	scanf("%d %d", &n, &m);
	i = 0;
	while (i < m)
	{
		scanf(" %[^\n]s", nomes[i]);
		k = 0;
		soma[i] = 0;
		while (k < n)
		{
			scanf("%lf", &notas[i][k]);
			soma[i] += notas[i][k];
			k++;
		}
		media[i] = soma[i] / n;
		i++;
	}
	i = 0;
	while (i < m)
	{
		if (media[i] >= 10)
			printf("%s>Aprovado(a)\n", nomes[i]);
		i++;
	}
	return (0);
}
