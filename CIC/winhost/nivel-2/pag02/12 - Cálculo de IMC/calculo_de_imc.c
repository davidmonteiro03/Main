/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculo_de_imc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 17:06:03 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 17:12:28 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	double	h;
	double	p;
	double	imc;

	scanf("%lf", &h);
	scanf("%lf", &p);
	imc = p / (h * h);
	printf("%.2lf\n", imc);
	if (imc < 18.5)
		printf("Abaixo peso ideal");
	else if (imc >= 18.5 && imc <= 24.9)
		printf("Peso ideal");
	else if (imc >= 25.0 && imc <= 29.9)
		printf("Sobrepeso");
	else if (imc >= 30.0 && imc <= 34.9)
		printf("Obesidade grau I");
	else if (imc >= 35.0 && imc <= 39.9)
		printf("Obesidade grau II");
	else
		printf("Obesidade grau III");
	printf("\n");
	return (0);
}
