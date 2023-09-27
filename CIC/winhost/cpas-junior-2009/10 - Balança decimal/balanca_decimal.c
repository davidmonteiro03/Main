/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   balanca_decimal.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:55:50 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/20 16:06:32 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	atr_pes(int pesos[5], int pes[5])
{
	pes[0] = 100;
	pes[1] = 50;
	pes[2] = 10;
	pes[3] = 5;
	pes[4] = 1;
	pesos[0] = 0;
	pesos[1] = 0;
	pesos[2] = 0;
	pesos[3] = 0;
	pesos[4] = 0;
}

int	main(void)
{
	char	*text;
	int		i;
	int		num;
	int		pesos[5];
	int		pes[5];

	text = "CLXVI";
	scanf("%d", &num);
	atr_pes(pesos, pes);
	i = -1;
	while (++i < 5)
	{
		while (num >= pes[i])
		{
			pesos[i]++;
			num -= pes[i];
		}
	}
	i = -1;
	while (++i < 5)
	{
		if (pesos[i] > 0)
			printf("%c-%d\n", text[i], pesos[i]);
	}
	return (0);
}
