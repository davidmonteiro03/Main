/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   roda_da_sorte.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:54:06 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/23 18:10:38 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	atr_roda(int roda[5])
{
	roda[0] = 10;
	roda[1] = 20;
	roda[2] = 40;
	roda[3] = 20;
	roda[4] = 10;
}

int	main(void)
{
	int	roda[5];
	int	f;
	int	q;
	int	fi;
	int	i;

	scanf("%d", &f);
	scanf("%d %d", &q, &fi);
	if (f > 0 && q >= 1 && q <= 4 && fi >= 1 && fi <= 5)
	{
		atr_roda(roda);
		i = -1;
		while (++i < f)
		{
			printf("%d %d\n", q, roda[(fi - 1) % 5]);
			if (roda[(fi - 1) % 5] == roda[fi % 5])
				q++;
			if (q > 4)
				q -= 4;
			fi++;
		}
		printf("PREMIO=%d\n", roda[(fi - 2) % 5]);
	}
	return (0);
}
