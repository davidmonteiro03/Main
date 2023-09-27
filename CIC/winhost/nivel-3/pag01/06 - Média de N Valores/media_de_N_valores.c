/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   media_de_N_valores.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 18:41:33 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 18:43:47 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	i;
	int	tmp;
	int	soma;
	double	media;

	scanf("%d", &n);
	media = 0.0;
	soma = 0;
	i = 0;
	while (i < n)
	{
		scanf("%d", &tmp);
		soma += tmp;
		i++;
	}
	media = (double)soma / (double)n;
	printf("%.2lf", media);
	return (0);
}
