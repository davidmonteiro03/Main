/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcular_a_media_das_posicoes_pares.c              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:47:25 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 19:53:12 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	list[100];
	double	media;
	int	soma;
	int	i;
	int	p;

	scanf("%d", &n);
	i = 0;
	while (i < n)
	{
		scanf("%d", &list[i]);
		i++;
	}
	i = 0;
	p = 0;
	soma = 0.0;
	while (i < n)
	{
		if (i % 2 != 0)
		{
			soma += (double)list[i];
			p++;
		}
		i++;
	}
	media = soma / (double)p;
	printf("A media e %.2lf", media);
	return (0);
}
