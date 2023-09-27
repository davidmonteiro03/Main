/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dia_da_semana.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:51:37 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/20 14:14:43 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	atr_dias(int dias[12])
{
	dias[0] = 0;
	dias[1] = 31;
	dias[2] = 60;
	dias[3] = 91;
	dias[4] = 121;
	dias[5] = 152;
	dias[6] = 182;
	dias[7] = 213;
	dias[8] = 244;
	dias[9] = 274;
	dias[10] = 305;
	dias[11] = 335;
}

int	main(void)
{
	int	a;
	int	b;
	int	dia;
	int	dias[12];

	scanf("%d", &a);
	scanf("%d", &b);
	atr_dias(dias);
	dia = a + dias[b - 1];
	if (dia % 7 == 0)
		printf("SEGUNDA-FEIRA");
	else if (dia % 7 == 1)
		printf("TERCA-FEIRA");
	else if (dia % 7 == 2)
		printf("QUARTA-FEIRA");
	else if (dia % 7 == 3)
		printf("QUINTA-FEIRA");
	else if (dia % 7 == 4)
		printf("SEXTA-FEIRA");
	else if (dia % 7 == 5)
		printf("SABADO");
	else if (dia % 7 == 6)
		printf("DOMINGO");
	return (0);
}
