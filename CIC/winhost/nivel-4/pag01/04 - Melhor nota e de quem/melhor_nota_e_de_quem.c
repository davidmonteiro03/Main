/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   melhor_nota_e_de_quem.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:55:45 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 20:00:29 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	double	max;
	double	notas[100];
	char	nomes[100][100];
	int	i;

	scanf("%d", &n);
	i = 0;
	while (i < n)
	{
		scanf(" %[^\n]s", nomes[i]);
		scanf("%lf", &notas[i]);
		if (i == 0)
			max = notas[i];
		if (notas[i] > max)
			max = notas[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		if (notas[i] == max)
			printf("Melhor nota foi %.0lf do(a) %s\n", notas[i], nomes[i]);
		i++;
	}
	return (0);
}
