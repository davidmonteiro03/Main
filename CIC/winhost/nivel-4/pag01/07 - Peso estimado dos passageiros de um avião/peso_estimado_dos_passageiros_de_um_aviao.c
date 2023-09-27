/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   peso_estimado_dos_passageiros_de_um_aviao          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 20:22:51 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 20:29:51 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	tmp;
	int	soma;
	int	adult, not_adult;

	soma = 0;
	adult = not_adult = 0;
	scanf("%d", &tmp);
	while (tmp != 0)
	{
		if (tmp < 18)
		{
			soma += 45;
			not_adult++;
		}
		else
		{
			soma += 75;
			adult++;
		}
		scanf("%d", &tmp);
	}
	printf("No aviao viajam %d adulto(s) e %d nao adulto(s)\n", adult, not_adult);
	printf("O peso estimado e de %d kg", soma);
	return (0);
}
