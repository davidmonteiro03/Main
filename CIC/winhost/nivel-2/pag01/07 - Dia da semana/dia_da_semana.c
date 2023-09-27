/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dia_da_semana.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:23:19 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 16:27:49 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	dia;

	scanf("%d", &dia);
	switch(dia)
	{
		case 1:
			printf("DOMINGO");
			break;
		case 2:
			printf("SEGUNDA-FEIRA");
			break;
		case 3:
			printf("TERCA-FEIRA");
			break;
		case 4:
			printf("QUARTA-FEIRA");
			break;
		case 5:
			printf("QUINTA-FEIRA");
			break;
		case 6:
			printf("SEXTA-FEIRA");
			break;
		case 7:
			printf("SABADO");
			break;
	}
	return (0);
}
