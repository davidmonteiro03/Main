/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alturas.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:02:31 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 14:14:44 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	n;
	int	i;
	int	alt;
	int	soma;
	int	max;
	double	media;
	char	nome[100];
	char	person[100];

	scanf("%d", &n);
	i = 0;
	soma = 0;
	while (i < n)
	{
		scanf(" %[^\n]s", nome);
		scanf("%d", &alt);
		if (i == 0){
			max = alt;
			strcpy(person, nome);
		}
		if (alt > max){
			strcpy(person, nome);
			max = alt;
		}
		soma += alt;
		i++;
	}
	media = (double)soma / (double)n;
	if (n > 0)
	{
		printf("SOMA: %d\n", soma);
		printf("MEDIA: %.2lf\n", media);
		printf("ALTURA MAX: %d\n", max);
		printf("PESSOA MAIS ALTA: %s", person);
	}
	return (0);
}
