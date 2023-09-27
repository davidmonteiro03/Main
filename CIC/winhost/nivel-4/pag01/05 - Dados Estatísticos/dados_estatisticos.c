/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dados_estatisticos.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 20:01:48 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 20:13:35 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	double	notas[100];
	double	media;
	double	soma;
	double	max;
	int	i, t;

	scanf("%d", &n);
	if (n > 0)
	{
		i = 0;
		soma = 0.0;
		while (i < n)
		{
			scanf("%lf", &notas[i]);
			if (i == 0)
				max = notas[i];
			if (notas[i] > max)
				max = notas[i];
			soma += notas[i];
			i++;
		}
		media = soma / (double)n;
		printf("MEDIA: %.1lf\n", media);
		i = 0;
		t = 0;
		while (i < n)
		{
			if (notas[i] > media)
				t++;
			i++;
		}
		if (t > 0)
			printf("NOTA SUPERIOR A MEDIA:\n");
		i = 0;
		while (i < n)
		{
			if (notas[i] > media)
				printf("%d\n", i + 1);
			i++;
		}
		printf("MELHORES NOTAS:\n");
		i = 0;
		while (i < n)
		{
			if (notas[i] == max)
				printf("%d\n", i + 1);
			i++;
		}
	}
	return (0);
}
