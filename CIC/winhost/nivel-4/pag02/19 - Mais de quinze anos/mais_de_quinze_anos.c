/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mais_de_quinze_anos.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 10:59:11 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/11 11:03:45 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	i;
	int	count;
	int	idds[100];
	double	alts[100];
	double	soma, media;

	scanf("%d", &n);
	i = 0;
	soma = 0.0;
	while (i < n)
	{
		scanf("%d", &idds[i]);
		scanf("%lf", &alts[i]);
		soma += alts[i];
		i++;
	}
	media = soma / (double)n;
	i = 0;
	count = 0;
	while (i < n)
	{
		if (idds[i] > 15 && alts[i] > media)
			count++;
		i++;
	}
	printf("%d", count);
	return (0);
}
