/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maior_e_onde_esta.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 18:51:53 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 18:55:06 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	tmp;
	int	i;
	int	max;
	int	pos;

	scanf("%d", &n);
	i = 0;
	while (i < n)
	{
		scanf("%d", &tmp);
		if (i == 0)
			max = tmp;
		if (tmp > max)
		{
			max = tmp;
			pos = i + 1;
		}
		i++;
	}
	if (n > 0)
		printf("O maior e o %d e esta na posicao %d", max, pos);
	return (0);
}
