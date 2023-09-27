/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quadrante.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:54:07 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/21 18:04:09 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	i;
	int	coord_x[100];
	int	coord_y[100];

	scanf("%d", &n);
	i = -1;
	while (++i < n)
		scanf("%d %d", &coord_x[i], &coord_y[i]);
	i = -1;
	while (++i < n)
	{
		if (coord_x[i] > 0 && coord_y[i] > 0)
			printf("Q1");
		else if (coord_x[i] < 0 && coord_y[i] > 0)
			printf("Q2");
		else if (coord_x[i] < 0 && coord_y[i] < 0)
			printf("Q3");
		else if (coord_x[i] > 0 && coord_y[i] < 0)
			printf("Q4");
		else if (coord_x[i] != 0 && coord_y[i] == 0)
			printf("X");
		else if (coord_x[i] == 0 && coord_y[i] != 0)
			printf("Y");
		else
			printf("O");
		printf("\n");
	}
	return (0);
}
