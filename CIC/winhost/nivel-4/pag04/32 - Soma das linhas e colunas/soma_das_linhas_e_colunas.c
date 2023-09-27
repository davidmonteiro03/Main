/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   soma_das_linhas_e_colunas.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:14:44 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/11 16:23:11 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	p, q, soma;
	int	i, j;
	int	mat[100][100];

	scanf("%d", &p);
	scanf("%d", &q);
	i = 0;
	while (i < p)
	{
		j = 0;
		while (j < q)
		{
			scanf("%d", &mat[i][j]);
			j++;
		}
		i++;
	}
	i = 0;
	while (i < p)
	{
		j = 0;
		soma = 0;
		while (j < q)
		{
			soma += mat[i][j];
			j++;
		}
		printf("A soma da linha %d e %d\n", i + 1, soma);
		i++;
	}
	j = 0;
	while (j < q)
	{
		i = 0;
		soma = 0;
		while (i < p)
		{
			soma += mat[i][j];
			i++;
		}
		printf("A soma da coluna %d e %d\n", j + 1, soma);
		j++;
	}
	return (0);
}
