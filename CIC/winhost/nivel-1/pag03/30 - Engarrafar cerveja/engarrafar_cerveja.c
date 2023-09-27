/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   engarrafar_cerveja.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 12:18:43 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 12:59:20 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	double	k;
	int	aux;
	int	gar_1;
	int	gar_0_5;
	int	gar_0_33;
	int	gar_0_2;

	scanf("%lf", &k);
	gar_1 = 0;
	gar_0_5 = 0;
	gar_0_33 = 0;
	gar_0_2 = 0;
	aux = (int)(k * 100);
	while (aux >= 100)
	{
		gar_1++;
		aux -= 100;
	}
	while (aux >= 50)
	{
		gar_0_5++;
		aux -= 50;
	}
	while (aux >= 33)
	{
		gar_0_33++;
		aux -= 33;
	}
	while (aux >= 20)
	{
		gar_0_2++;
		aux -= 20;
	}
	printf("Garrafas necessarias: %d de 1L, %d de 1/2L, %d de 0,33L e %d de 0,20L.", gar_1, gar_0_5, gar_0_33, gar_0_2);
	return (0);
}
