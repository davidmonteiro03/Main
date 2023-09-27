/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   estacoes_do_ano.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:06:12 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/22 16:07:18 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	a;

	scanf("%d", &a);
	if (a >= 79 && a <= 171)
		printf("PRIMAVERA");
	else if (a >= 172 && a <= 264)
		printf("VERAO");
	else if (a >= 265 && a <= 355)
		printf("OUTONO");
	else if ((a >= 356 && a <= 365) || (a >= 1 && a <= 78))
		printf("INVERNO");
	return (0);
}
