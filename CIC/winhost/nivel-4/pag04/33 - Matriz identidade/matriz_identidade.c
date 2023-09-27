/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matriz_identidade.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:24:47 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/11 16:28:38 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	i, j;
	int	n, flag;
	int	mat[100][100];

	scanf("%d", &n);
	if (n >= 2)
	{
		i = 0;
		while (i < n)
		{
			j = 0;
			while (j < n)
			{
				scanf("%d", &mat[i][j]);
				j++;
			}
			i++;
		}
		i = 0;
		flag = 0;
		while (i < n)
		{
			j = 0;
			while (j < n)
			{
				if (i == j && mat[i][j] != 1)
					flag = 1;
				else if (i != j && mat[i][j] != 0)
					flag = 1;
				j++;
			}
			i++;
		}
		if (flag == 0)
			printf("SIM");
		else
			printf("NAO");
	}
	return (0);
}
