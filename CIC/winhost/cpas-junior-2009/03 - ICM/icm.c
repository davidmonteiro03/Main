/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   icm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:22:22 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/20 14:36:31 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	validate_h(double imc)
{
	if (imc < 20.7)
		printf("ABAIXO DO PESO\n");
	else if (imc < 26.4)
		printf("NO PESO NORMAL\n");
	else if (imc < 27.8)
		printf("MARGINALMENTE ACIMA DO PESO\n");
	else if (imc <= 31.1)
		printf("ACIMA DO PESO IDEAL\n");
	else
		printf("OBESO\n");
}

void	validate_m(double imc)
{
	if (imc < 19.1)
		printf("ABAIXO DO PESO\n");
	else if (imc < 25.8)
		printf("NO PESO NORMAL\n");
	else if (imc < 27.3)
		printf("MARGINALMENTE ACIMA DO PESO\n");
	else if (imc <= 32.3)
		printf("ACIMA DO PESO IDEAL\n");
	else
		printf("OBESO\n");
}

int	main(void)
{
	char	gen;
	int		peso;
	double	alt;
	double	imc;

	scanf(" %c", &gen);
	scanf("%d", &peso);
	scanf("%lf", &alt);
	imc = (double)peso / (alt * alt);
	if (gen == 'H' || gen == 'M')
	{
		if (gen == 'H')
			validate_h(imc);
		else
			validate_m(imc);
	}
	return (0);
}
