/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   media_de_alturas_por_sexo.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 20:45:26 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 21:12:16 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	mulheres, homens;
	char	genero[100];
	int	i;
	double	alt[100];
	double	soma_mul, soma_hom;
	double	media_mul, media_hom;
	double	max_mul, max_hom;
	double	min_mul, min_hom;

	scanf("%d", &n);
	i = 0;
	mulheres = 0;
	homens = 0;
	soma_mul = 0.0;
	soma_hom = 0.0;
	while (i < n)
	{
		scanf(" %c", &genero[i]);
		scanf("%lf", &alt[i]);
		if (genero[i] == 'F')
		{
			if (mulheres == 0)
				max_mul = min_mul = alt[i];
			if (alt[i] > max_mul)
				max_mul = alt[i];
			if (alt[i] < min_mul)
				min_mul = alt[i];
			mulheres++;
			soma_mul += alt[i];
		}
		else if (genero[i] == 'M')
		{
			if (homens == 0)
				max_hom = min_hom = alt[i];
			if (alt[i] > max_hom)
				max_hom = alt[i];
			if (alt[i] < min_hom)
				min_hom = alt[i];
			homens++;
			soma_hom += alt[i];
		}
		i++;
	}
	media_mul = soma_mul / (double)mulheres;
	media_hom = soma_hom / (double)homens;
	if (mulheres >= 1)
		printf("MEDIA MULHERES: %.0lf\n", media_mul);
	if (homens >= 1)
		printf("MEDIA HOMENS: %0.lf\n", media_hom);
	if (mulheres >= 2)
	{
		printf("MAIS BAIXA: %.0lf\n", min_mul);
		printf("MAIS ALTA: %.0lf\n", max_mul);
	}
	if (homens >= 2)
	{
		printf("MAIS BAIXO: %.0lf\n", min_hom);
		printf("MAIS ALTO: %.0lf\n", max_hom);
	}
	return (0);
}
